#include "gst/gst.h"

int main(int argc, char *argv[]) {
    gst_init(&argc, &argv);

    const gchar *pipeline_description =
        "filesrc location=C:\Users\Vani\Downloads\music\8K_16bit_MONO_30s.wav ! "
        "wavparse ! "
        "audioconvert ! "
        "audioresample ! "
        "\"audio/x-raw,format=S16LE,rate=8000,channels=1\" ! "
        "mulawenc ! "
        "\"audio/x-mulaw,rate=8000,channels=1\" ! "
        "curlhttpsink location=\"http://192.168.188.42/bha-api/audio-transmit.cgi?http-user=ghokwk0001&http-password=vbsj4gyzuX\" content-type=\"audio/basic\"";

    GError *error = nullptr;
    GstElement *pipeline = gst_parse_launch(pipeline_description, &error);

    if (error != nullptr) {
        g_printerr("Error creating pipeline: %s\n", error->message);
        g_clear_error(&error);
        return -1;
    }

    gst_element_set_state(pipeline, GST_STATE_PLAYING);

    GstBus *bus = gst_element_get_bus(pipeline);
    GstMessage *msg = gst_bus_timed_pop_filtered(bus, GST_CLOCK_TIME_NONE, (GstMessageType)(GST_MESSAGE_ERROR | GST_MESSAGE_EOS));

    if (msg != nullptr) {
        if (GST_MESSAGE_TYPE(msg) == GST_MESSAGE_ERROR) {
            GError *err = nullptr;
            gchar *debug_info = nullptr;
            gst_message_parse_error(msg, &err, &debug_info);
            g_printerr("Error received from element %s: %s\n", GST_OBJECT_NAME(msg->src), err->message);
            g_printerr("Debugging information: %s\n", debug_info ? debug_info : "none");
            g_clear_error(&err);
            g_free(debug_info);
        } else if (GST_MESSAGE_TYPE(msg) == GST_MESSAGE_EOS) {
            g_print("End of stream\n");
        }

        gst_message_unref(msg);
    }

    gst_object_unref(bus);
    gst_element_set_state(pipeline, GST_STATE_NULL);
    gst_object_unref(pipeline);

    return 0;
}

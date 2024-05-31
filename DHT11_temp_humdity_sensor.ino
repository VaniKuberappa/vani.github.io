#include <DHT.h>

#define DHTPIN 2        // Replace with the appropriate pin number where your DHT11 sensor is connected
#define DHTTYPE DHT11   // Specify the DHT sensor type you are using (DHT11, DHT21, or DHT22)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C\tHumidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}
#include <Servo.h>

//#include <Esplora.h>



/*********************************
 * name:buzzer
 * function: you should hear the buzzer make sounds.
 *************************************/
//Email: info@primerobotics.in
//Website: www.primerobotics.in
/************************************/




Servo myservo;

void setup(){
    myservo.attach(9);
    myservo.write(90); //move servos to center position --> 90 degree
}

void loop(){
    myservo.write(90);// move servos to center position --> 90 degree
    delay(1000);
    myservo.write(30);//move servos to the cenyter position--> degree 60
    delay(1000);

}



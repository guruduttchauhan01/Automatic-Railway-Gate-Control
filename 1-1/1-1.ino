#include <Servo.h>

Servo motor, motor1;

int sensor_pin = 10;
int sensor_pin1 = 11;
int servo_pin = 8;
int servo_pin1 = 9;
int GledPin = 12;
int RledPin = 13;
int val;
int val2;

void setup(){
  pinMode(GledPin, OUTPUT);
  pinMode(RledPin, OUTPUT);
  pinMode(sensor_pin,INPUT);
  pinMode(sensor_pin1,INPUT);
  motor.attach(servo_pin);
  motor1.attach(servo_pin1);
  
}

void loop(){
   int irsensor = digitalRead( sensor_pin );
       int irsensor1 = digitalRead( sensor_pin1 );

if(irsensor == HIGH && irsensor1 == LOW )
{
       
       digitalWrite(RledPin, LOW);
       digitalWrite(GledPin, HIGH);
       motor.write(90);
       motor1.write(90);
      
}
else if(irsensor == LOW && irsensor1 == HIGH )
{
       digitalWrite(RledPin, HIGH);
       digitalWrite(GledPin, LOW);
       motor.write(0);
       motor1.write(0);
}

delay(1000);
}

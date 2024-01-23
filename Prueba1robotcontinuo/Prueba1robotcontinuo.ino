#include <Servo.h>

#define pinServo1 6
#define pinServo2 4

Servo servoMotor1;
Servo servoMotor2;

int pot1, pot2;
int ang1 = 0;
int ang2 = 0;
int a1, a2;

unsigned long t1;

void setup() {
  Serial.begin(9600);
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  servoMotor1.attach(pinServo1);
  servoMotor2.attach(pinServo2);
  t1 = millis();
}

void loop() {
  pot1 = analogRead(A2);
  pot2 = analogRead(A1);
  
  ang1 = map(pot1, 0, 1023, 0, 180);
  ang2 = map(pot2, 0, 1023, 0, 180);

  //a1 = map(ang1, 0, 300, 0, 180);
  //a2 = map(ang2, 0, 300, 0, 180);

  servoMotor1.write(ang1);
  servoMotor2.write(ang2);

  if(millis()-t1 >= 1000){
    t1=millis();
    Serial.print("angulo 1: ");
    Serial.print(ang1);
    Serial.print(", angulo 2: ");
    Serial.println(ang2);
  }
}

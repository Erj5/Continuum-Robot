#include <Servo.h>
#define pinServo6 11
#define pinServo5 10
#define pinServo4 9
#define pinServo3 6
#define pinServo2 5
#define pinServo1 3

Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;
Servo servoMotor5;
Servo servoMotor6;

int pot1, pot2, pot3, pot4, pot5, pot6;
int ang1 = 0;
int ang2 = 0;
int ang3 = 0;
int ang4 = 0;
int ang5 = 0;
int ang6 = 0;
int cont1 = 90;
int cont2 = 90;
int cont3 = 90;
int cont4 = 90;
int cont5 = 90;
int cont6 = 90;

unsigned long t1, t2;

void setup() {
  Serial.begin(9600);
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
  pinMode(pot4, INPUT);
  pinMode(pot5, INPUT);
  pinMode(pot6, INPUT);
  servoMotor1.attach(pinServo1);
  servoMotor2.attach(pinServo2);
  servoMotor3.attach(pinServo3);
  servoMotor4.attach(pinServo4);
  servoMotor5.attach(pinServo5);
  servoMotor6.attach(pinServo6);
  t1 = millis();
  t2 = millis();
}

void loop() {
  pot1 = analogRead(A0);
  pot2 = analogRead(A1);
  pot3 = analogRead(A2);
  pot4 = analogRead(A3);
  pot5 = analogRead(A4);
  pot6 = analogRead(A5);
  
  ang1 = map(pot1, 0, 1023, 0, 180);
  ang2 = map(pot2, 0, 1023, 0, 180);
  ang3 = map(pot3, 0, 1023, 0, 180);
  ang4 = map(pot4, 0, 1023, 0, 180);
  ang5 = map(pot5, 0, 1023, 0, 180);
  ang6 = map(pot6, 0, 1023, 0, 180);

  if(millis()-t2 >= 10){
    t2=millis();

    if(ang1>100){
      cont1 = 100;
    }
    else if(ang1<80){
      cont1 = 80;
    }
    else if(ang1>85 && ang1<95){
      cont1 = 90;
    }

    if(ang2>100){
      cont2 = 100;
    }
    else if(ang2<80){
      cont2 = 80;
    }
    else if(ang2>85 && ang2<95){
      cont2 = 90;
    }

    if(ang3>100){
      cont3 = 100;
    }
    else if(ang3<80){
      cont3 = 80;
    }
    else if(ang3>85 && ang3<95){
      cont3 = 90;
    }

    if(ang4>100){
      cont4 = 100;
    }
    else if(ang4<80){
      cont4 = 80;
    }
    else if(ang4>85 && ang4<95){
      cont4 = 90;
    }

    if(ang5>100){
      cont5 = 100;
    }
    else if(ang5<80){
      cont5 = 80;
    }
    else if(ang5>85 && ang5<95){
      cont5 = 90;
    }

    if(ang6>100){
      cont6 = 100;
    }
    else if(ang6<80){
      cont6 = 80;
    }
    else if(ang6>85 && ang6<95){
      cont6 = 90;
    }    
  }
  servoMotor1.write(cont1);
  servoMotor2.write(cont2);
  servoMotor3.write(cont3);
  servoMotor4.write(cont4);
  servoMotor5.write(cont5);
  servoMotor6.write(cont6);

  if(millis()-t1 >= 1000){
    t1=millis();
    Serial.print("angulo 1: ");
    Serial.print(pot3);
    Serial.print(", angulo 2: ");
    Serial.println(pot4);
  }
}
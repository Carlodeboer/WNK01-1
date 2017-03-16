#include <Servo.h>

int schakelaar = 2;
int richtingMotor1 = 4;
int PWMMotor1 = 5;
int richtingMotor2 = 7;
int PWMMotor2 = 6;
Servo myservo;
//boolean aan;
int segment_cijfer = 0;
boolean segment_state = false;

void tienCentimeter() {
  penOmhoog();
  digitalWrite(richtingMotor1, HIGH);
  digitalWrite(richtingMotor2, HIGH);
  analogWrite(PWMMotor1, 255);
  analogWrite(PWMMotor2, 255);

  for (int I = 0; I < 150; I++) {
    if (!segment_state) {
      numberOn(segment_cijfer);
      segment_state = true;
    } else {
      letterOn();
      segment_state = false;
    }
    delay(10);
  }
  delay(1600);
}

void setup() {
  pinMode(schakelaar, INPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(richtingMotor1, OUTPUT);
  pinMode(PWMMotor1, OUTPUT);
  pinMode(richtingMotor2, OUTPUT);
  pinMode(PWMMotor2, OUTPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  penOmhoog();
  delay(500);

  if (digitalRead(schakelaar) == HIGH) {
    tienCentimeter();
    draaien(4, "L");
    recht(2, "V", false);
    draaien(4, "L");
    tienCentimeter();
    //    letterA();
    //    delay (2000);
    //    draaien(4, "L");
    //    recht(2, "V", false);
    //    draaien(4, "L");
    //    delay (2000);
    //    letterE();
    //    delay (2000);
    //    draaien(4, "L");
    //    recht(1, "V", false);
    //    draaien(4, "L");
    //    delay (2000);
    //    letterF();
    //    delay (2000);
    //    draaien(4, "L");
    //    recht(1, "V", false);
    //    draaien(4, "L");
    //    delay (2000);
    //    letterH();
    //    delay (2000);
    //    draaien(4, "L");
    //    recht(1, "V", false);
    //    draaien(4, "L");
    //    delay (2000);
    //    letterI();
    //    delay (2000);
    //    draaien(4, "L");
    //    recht(1, "V", false);
    //    draaien(4, "L");
  }
}

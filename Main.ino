#include <Servo.h>

int schakelaar = 1;
int richtingMotor1 = 4;
int PWMMotor1 = 5;
int richtingMotor2 = 7;
int PWMMotor2 = 6;
Servo myservo;
int segment_cijfer = 0;
boolean segment_state = false;
bool progAf = false;

void tienCentimeter() {
  penOmhoog();
  digitalWrite(richtingMotor1, HIGH);
  digitalWrite(richtingMotor2, HIGH);
  analogWrite(PWMMotor1, 150);
  analogWrite(PWMMotor2, 150);

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
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
  //  delay(1600);
  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
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
  Serial.println(digitalRead(schakelaar));
  int waarde = digitalRead(schakelaar);
  if(waarde == 1 & progAf)
  {
    progAf = false;
  }
  if (waarde == 1 && !progAf) {
    tienCentimeter();
    letterA();
    tienCentimeter();
    draaien(4, "L");
    recht(2, "V", false);
    draaien(4, "L");
    tienCentimeter();

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
    progAf = true;
  }
}

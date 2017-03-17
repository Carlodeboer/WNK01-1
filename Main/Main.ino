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
bool startBereikt = false;
const int lijnSensor = A0;
int zwartTimer = 0;
int pos = 0;

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
  pinMode(lijnSensor, INPUT);

  pinMode(schakelaar, INPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(0, OUTPUT);
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

bool door = true;
void loop() {
//  penOmlaag();
  delay(4000);
  while (door == true) {
    letterA();
    door = false;
  }
}

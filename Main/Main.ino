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
int lijnSensor1 = A0;
int lijnSensor2 = A1;
int zwartTimer;
int zwartWaarde = 3;
bool zwarteLijn;
bool startBereikt;
String woord;

void tienCentimeter() {
  penOmhoog();
  digitalWrite(richtingMotor1, HIGH);
  digitalWrite(richtingMotor2, HIGH);
  analogWrite(PWMMotor1, 150);
  analogWrite(PWMMotor2, 150);

  for (int I = 0; I < 90; I++) {
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
  pinMode(lijnSensor1, INPUT);
  pinMode(lijnSensor2, INPUT);

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
  while (! Serial);
  Serial.println("Woord:");

}

bool door = true;

void loop() {
  if (Serial.available())
  {
    woord = Serial.readString();
    woord.toUpperCase();
    Serial.print(woord);
  }
  
  while(door){
  digitalWrite(richtingMotor1, HIGH);
  digitalWrite(richtingMotor2, HIGH);
  analogWrite(PWMMotor1, 150);
  analogWrite(PWMMotor2, 150);
  door = false;
  }

checkLijn();  
  
  //  penOmlaag();

}

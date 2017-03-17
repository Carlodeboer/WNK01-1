void draaien(int hoek, String  richting) {
  delay(500);
  penOmlaag();
  if (richting.equals("R")) {
    digitalWrite(richtingMotor1, LOW);
    digitalWrite(richtingMotor2, HIGH);
  } else if (richting.equals("L")) {
    digitalWrite(richtingMotor1, HIGH);
    digitalWrite(richtingMotor2, LOW);
  }

  analogWrite(PWMMotor1, 150);
  analogWrite(PWMMotor2, 150);

  if (hoek == 1) {
//    for(int i = 0; i <= 360; i = i + 
    delay(360);
  } else if (hoek == 2) {
    delay(700);
  } else if (hoek == 3) {
    delay(805);
  } else if (hoek == 4) {
    delay(1150);
  }

  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
  delay(500);
}

void recht(int lengte, String richting, boolean schrijven) {
  delay(500);
  if (schrijven) {
    penOmlaag();
  } else if (!schrijven) {
//    penOmhoog();
  }
  if (richting.equals("V")) {
    digitalWrite(richtingMotor1, HIGH);
    digitalWrite(richtingMotor2, HIGH);
  } else if (richting.equals("A")) {
    digitalWrite(richtingMotor1, LOW);
    digitalWrite(richtingMotor2, LOW);
  }

  analogWrite(PWMMotor1, 150);
  analogWrite(PWMMotor2, 150);

  if (lengte == 1) {
    delay(400);
  } else if (lengte == 2) {
    delay(800);
  } else if (lengte == 3) {
    delay(448);
  } else if (lengte == 4) {
    delay(895);
  }

  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
  delay(500);
}

void halfRondje(int grootte, String richting) {
  //  draaien(1, "R");
}

void penOmhoog() {
  myservo.write(140);
  delay(500);
}

void penOmlaag() {
  myservo.write(170);
  delay(500);
}

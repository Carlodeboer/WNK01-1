void draaien(int hoek, String  richting) {
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
    delay(570);
  } else if (hoek == 2) {
    delay(1120);
  } else if (hoek == 3) {
    delay(1330);
  } else if (hoek == 4) {
    delay(1900);
  }

  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
  delay(200);
}

void recht(int lengte, String richting, boolean schrijven) {
  if (schrijven) {
    penOmlaag();
  } else if (!schrijven) {
    penOmhoog();
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
    delay(800);
  } else if (lengte == 2) {
    delay(1600);
  } else if (lengte == 3) {
    delay(895);
  } else if (lengte == 4) {
    delay(1790);
  }

  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
  delay(200);
}

void halfRondje(int grootte, String richting) {
  //  draaien(1, "R");
}

void penOmhoog() {
  myservo.write(140);
}

void penOmlaag() {
  myservo.write(170);
}

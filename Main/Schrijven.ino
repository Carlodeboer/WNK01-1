void draaien(int hoek, String  richting) {
  if (!kaderlijnGezien) {
    delay(500);
    penOmlaag();
    if (richting.equals("R")) {
      digitalWrite(richtingMotor1, LOW);
      digitalWrite(richtingMotor2, HIGH);
    } else if (richting.equals("L")) {
      digitalWrite(richtingMotor1, HIGH);
      digitalWrite(richtingMotor2, LOW);
    }

    analogWrite(PWMMotor1, 140);
    analogWrite(PWMMotor2, 140);

    if (hoek == 1) {
      delay(800);
    } else if (hoek == 2) {
      delay(530);
    } else if (hoek == 3) {
      delay(630);
    } else if (hoek == 4) {
      delay(1000);
    }

    analogWrite(PWMMotor1, 0);
    analogWrite(PWMMotor2, 0);
    delay(500);
  }
}

void recht(int lengte, String richting, boolean schrijven) {
  if (!kaderlijnGezien) {
    delay(500);
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

    analogWrite(PWMMotor1, 140);
    analogWrite(PWMMotor2, 140);

    if (lengte == 1) {

      for (int i = 0; i <= 400; i = i + 10) {
        checkLijn();
        delay(10);
      }
    } else if (lengte == 2) {

      for (int i = 0; i <= 800; i++) {
        checkLijn();
        delay(1);
      }
    } else if (lengte == 3) {
      for (int i = 0; i <= 448; i = i + 10) {
        checkLijn();
        delay(10);
      }
    } else if (lengte == 4) {
      for (int i = 0; i <= 895; i = i + 10) {
        checkLijn();
        delay(10);
      }
    }

    analogWrite(PWMMotor1, 0);
    analogWrite(PWMMotor2, 0);
    delay(500);
  }
}

void halfRondje(int grootte, String richting) {

}

void penOmhoog() {
  myservo.write(80);
  delay(500);
}

void penOmlaag() {
  myservo.write(168);
  delay(500);
}

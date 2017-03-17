

void checkLijn() {
  int proximityADC1 = analogRead(lijnSensor1);
  float proximityV1 = (float)proximityADC1 * 5.0 / 1023.0;

  int proximityADC2 = analogRead(lijnSensor2);
  float proximityV2 = (float)proximityADC2 * 5.0 / 1023.0;

  if (proximityV1 > zwartWaarde && proximityV2 > zwartWaarde) {
    zwarteLijn = false;
  } else {
    zwarteLijn = true;
  }
 
  if (zwarteLijn == false) {
    zwartTimer = 0;
  }
  else {
    zwartTimer ++;
   

    if (zwartTimer >= 1 && startBereikt == false) {
      Serial.println("Startlijn bereikt.");
      startBereikt = true;
    }

    if (zwartTimer >= 2000) {
      Serial.println("Grenslijn bereikt.");
      stopMotoren();
    }
  }
}

void stopMotoren() {
  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
  penOmhoog();
  Serial.println("Motoren gestopt.");
}


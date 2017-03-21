bool temp = false;
int test = 0;
//bool zwarteLijnGezien = false;
bool kaderlijnGezien = false;
bool referentielijnGezien = false;

void checkLijn() {
  int proximityADC1 = analogRead(lijnSensor1);
  float proximityV1 = (float)proximityADC1 * 5.0 / 1023.0;

  int proximityADC2 = analogRead(lijnSensor2);
  float proximityV2 = (float)proximityADC2 * 5.0 / 1023.0;



  if (proximityV1 > 2 && proximityV2 > 2) {

    test = test + 1;
    temp = true;
  }


  if (proximityV1 < 1 && proximityV2 < 1 && temp) {

    temp = false;


    Serial.println("counter value:");
    Serial.println(test);

    if (test > 400) {
      kaderlijnGezien = true;
      stopMotoren();
      Serial.println("test123");
    } else {
      referentielijnGezien = true;
      Serial.println("referentielijn is gevonden.");
      analogWrite(PWMMotor1, 0);
      analogWrite(PWMMotor2, 0);
        if(segment_cijfer == 1){
      
      draaien(4, "L");
      recht(1, "V", false);
      draaien(4, "L");
    } 
    tienCentimeter();
    }
    test = 0;
    //    zwarteLijnGezien = true;
  }
}

void stopMotoren() {
  analogWrite(PWMMotor1, 0);
  analogWrite(PWMMotor2, 0);
  penOmhoog();
  Serial.println("Motoren gestopt.");
  Serial.println("Counter: ");
  Serial.println(test);

}

void zoekReferentielijn() {
  while (!referentielijnGezien) {
    digitalWrite(richtingMotor1, HIGH);
    digitalWrite(richtingMotor2, HIGH);
    analogWrite(PWMMotor2, 140);
    analogWrite(PWMMotor1, 140);
    checkLijn();
  }

}


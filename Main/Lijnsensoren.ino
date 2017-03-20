long starttijd;
long eindtijd;
long verschil;
bool temp = false;
int test = 0;

void checkLijn() {
  int proximityADC1 = analogRead(lijnSensor1);
  float proximityV1 = (float)proximityADC1 * 5.0 / 1023.0;

  int proximityADC2 = analogRead(lijnSensor2);
  float proximityV2 = (float)proximityADC2 * 5.0 / 1023.0;

  if (proximityV1 > 2 && proximityV2 > 2) {
    starttijd = millis();
    test = test + 1;
    temp = true;
  }


  if (proximityV1 < 1 && proximityV2 < 1 && temp) {
    eindtijd = millis();
    temp = false;

    Serial.println("counter value:");
    Serial.println(test);

    if (test > 400) {
      stopMotoren();
    }
    test = 0;
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

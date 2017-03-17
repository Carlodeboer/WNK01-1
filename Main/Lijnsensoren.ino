long starttijd;
long eindtijd;
long verschil;
bool temp;


void checkLijn() {
  int proximityADC1 = analogRead(lijnSensor1);
  float proximityV1 = (float)proximityADC1 * 5.0 / 1023.0;

  int proximityADC2 = analogRead(lijnSensor2);
  float proximityV2 = (float)proximityADC2 * 5.0 / 1023.0;

if(proximityV1 > 2 && proximityV2 > 2){
  starttijd = millis();
  temp = true;
  
}


if(proximityV1 < 1 && proximityV2 < 1 && temp){
  eindtijd = millis();
  temp = false;
  
Serial.print("verschil: ");
Serial.println(starttijd);
Serial.println(eindtijd);
Serial.println(eindtijd-starttijd);
stopMotoren();
}






 
//  if (proximityV1 > zwartWaarde && proximityV2 > zwartWaarde) {
//    zwarteLijn = true;
//  } else {
//    zwarteLijn = false;
//  }
//
//  if (zwarteLijn == false) {
//    zwartTimer = 0;
//  }
//  else {
//    zwartTimer ++;
//  }
//
//    if (zwartTimer >= 1){
//    Serial.println(zwartTimer);
//
//    if (zwartTimer == 10 && startBereikt == false) {
//      Serial.println("Startlijn bereikt.");
//      startBereikt = true;
//      tienCentimeter();  
//    }
//    if(zwartTimer == 50) {
//      Serial.println("Grenslijn bereikt.");
//      stopMotoren();
//    }
//  }
}

  void stopMotoren() {
    analogWrite(PWMMotor1, 0);
    analogWrite(PWMMotor2, 0);
    penOmhoog();
    Serial.println("Motoren gestopt.");
  }

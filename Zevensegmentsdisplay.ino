void letterOn() {
  digitalWrite(3, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW); // LETTER
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, LOW);
}

void numberOn(int number) {
  if (number == 0) {
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 1) {
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 2) {
    digitalWrite(3, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 3) {
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 4) {
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 5) {
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 6) {
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 7) {
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 8) {
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  } else if (number == 9) {
    digitalWrite(3, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
  }
}


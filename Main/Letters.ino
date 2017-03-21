void kiesLetters() {

  for (int i = 0; i < woord.length(); i++)
  {
    char letter = woord.charAt(i);
    if (letter == 'A') {
      letterA();

    }
    if (letter == 'B') {
      letterB();

    }
    if (letter == 'C') {
      letterC();

    }
    if (letter == 'D') {
      letterD();

    }
    if (letter == 'E') {
      letterE();

    }
    if (letter == 'F') {
      letterF();

    }
    if (letter == 'G') {
      letterG();

    }
    if (letter == 'H') {
      letterH();

    }
    if (letter == 'I') {
      letterI();

    }
    if (letter == 'J') {
      letterJ();

    }
    if (letter == 'K') {
      letterK();

    }
    if (letter == 'L') {
      letterL();

    }
    if (letter == 'M') {
      letterM();

    }
    if (letter == 'N') {
      letterN();

    }
    if (letter == 'O') {
      letterO();

    }
    if (letter == 'P') {
      letterP();

    }
    if (letter == 'Q') {
      letterQ();

    }
    if (letter == 'R') {
      letterR();

    }
    if (letter == 'S') {
      letterS();

    }
    if (letter == 'T') {
      letterT();

    }
    if (letter == 'U') {
      letterU();

    }
    if (letter == 'V') {
      letterV();

    }
    if (letter == 'W') {
      letterW();

    }
    if (letter == 'X') {
      letterX();

    }
    if (letter == 'Y') {
      letterY();

    }
    if (letter == 'Z') {
      letterZ();

    }
  }

}

void letterA() {
  draaien(1, "R");
  recht(3, "V", true);
  recht(3, "V", true);
  draaien(2, "L");
  recht(3, "A", true);
  draaien(3, "L");
  recht(1, "V", true);
  recht(1, "A", false);
  draaien(3, "R");
  recht(3, "A", true);
  draaien(1, "R");
  draaien(4, "R");
  draaien(4, "R");
  zoekReferentielijn();
}

void letterB() {
  recht(2, "V", true);
  draaien(4, "R");
  halfRondje(1, "V");
  halfRondje(1, "A");
  recht(2, "V", false);
  draaien(4, "R");
}

void letterC() {
  recht(2, "V", false);
  draaien(4, "L");
  recht(1, "A", false);
  halfRondje(2, "V");
  draaien(4, "R");
}

void letterD() {
  recht(2, "V", true);
  draaien(4, "R");
  halfRondje(2, "V");
  recht(1, "A", false);
  draaien(4, "L");
}

void letterE() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  draaien(4, "R");
  recht(1, "V", true);
  draaien(4, "R");
  recht(1, "V", false);
  draaien(4, "R");
  recht(1, "V", true);
  draaien(4, "L");
  recht(1, "V", false);
  draaien(4, "L");
  recht(1, "V", true);
  draaien(4, "R");
  zoekReferentielijn();
}

void letterF() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  draaien(4, "R");
  recht(1, "V", true);
  draaien(4, "R");
  recht(1, "V", false);
  draaien(4, "R");
  recht(1, "V", true);
  recht(1, "A", false);
  draaien(4, "L");
  recht(1, "V", false);
  zoekReferentielijn();
}

void letterG() {
  recht(2, "V", false);
  draaien(4, "L");
  recht(1, "A", false);
  halfRondje(2, "V");
  draaien(4, "L");
  recht(1, "V", true);
  draaien(4, "L");
  draaien(4, "L");
  recht(1, "V", false);
}

void letterH() {
  // Gecontroleerd
  //
  //  recht(2, "V", true);
  //  draaien(4, "R");
  //  recht(1, "V", false);
  //  draaien(4, "R");
  //  recht(1, "V", true);
  //  draaien(4, "R");
  //  recht(1, "V", true);
  //  recht(1, "A", false);
  //  draaien(4, "L");
  //  recht(1, "V", true);


  recht(1, "V", true);
  recht(1, "V", true);
  draaien(4, "R");
  recht(1, "V", false);
  draaien(4, "R");
  recht(1, "V", true);
  recht(1, "V", true);
  recht(1, "A", true);
  draaien(4, "R");
  recht(1, "V", true);
  recht(1, "A", false);
  draaien(4, "R");
  draaien(4, "R");
  draaien(4, "R");
  recht(1, "V", true);
  //  recht(1, "V", true);
  zoekReferentielijn();
}

void letterI() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  recht(2, "A", false);
  draaien(4, "R");
  draaien(4, "R");
  zoekReferentielijn();
}

void letterJ() {
  recht(2, "V", false);
  draaien(4, "R");
  recht(1, "V", true);
  draaien(4, "R");
  recht(1, "V", true);
  halfRondje(1, "V");
  recht(1, "A", false);
  draaien(4, "L");
  recht(1, "A", false);
  draaien(4, "R");
}

void letterK() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  recht(1, "A", false);
  draaien(1, "R");
  recht(3, "V", true);
  recht(3, "A", false);
  draaien(1, "L");
  draaien(1, "L");
  recht(3, "A", true);
  draaien(1, "R");
  draaien(4, "R");
  draaien(4, "R");
}

void letterL() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  recht(2, "A", false);
  draaien(4, "R");
  recht(1, "V", true);
  draaien(4, "R");
  zoekReferentielijn();
}

void letterM() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  draaien(1, "L");
  recht(3, "A", true);
  draaien(2, "R");
  recht(3, "V", true);
  draaien(1, "L");
  recht(2, "A", true);
  draaien(4, "R");
  draaien(4, "R");
}

void letterN() {
  // Gecontroleerd
  //
  recht(2, "V", true);
  draaien(1, "L");
  recht(4, "A", true);
  draaien(1, "R");
  recht(2, "V", true);
  recht(2, "A", false);
  draaien(4, "R");
  draaien(4, "R");
}

void letterO() {
  draaien(4, "R");
  recht(1, "V", false);
  halfRondje(1, "V");
  halfRondje(1, "V");
  recht(1, "V", false);
  draaien(4, "R");
}

void letterP() {
  recht(2, "V", true);
  draaien(4, "R");
  halfRondje(1, "V");
  draaien(4, "L");
  recht(1, "V", false);
  draaien(4, "L");
  recht(1, "V", false);
  draaien(4, "R");
}

void letterQ() {
  //  // Fuck die q
}

void letterR() {
  recht(2, "V", true);
  draaien(4, "R");
  halfRondje(1, "V");
  draaien(9, "R");
  recht(3, "A", false);
  draaien(9, "R");
}

void letterS() {
  //
}

void letterT() {
  // Gecontroleerd
  //
  draaien(4, "R");
  recht(1, "V", false);
  draaien(4, "L");
  recht(2, "V", true);
  draaien(4, "L");
  recht(1, "V", true);
  recht(1, "A", false);
  recht(1, "A", true);
  draaien(4, "L");
  recht(2, "V", false);
  zoekReferentielijn();
}
//
void letterU() {

}

void letterV() {
  // Gecontroleerd
  //
  recht(2, "V", false);
  draaien(1, "L");
  recht(4, "A", true);
  draaien(2, "L");
  recht(4, "V", true);
  draaien(1, "L");
  recht(2, "A", false);
  draaien(4, "R");
  draaien(4, "R");
}
//
void letterW() {
  // Gecontroleerd
  //
  recht(2, "V", false);
  recht(1, "A", true);
  draaien(1, "L");
  recht(3, "A", true);
  draaien(2, "R");
  recht(3, "V", true);
  draaien(2, "L");
  recht(3, "A", true);
  draaien(2, "R");
  recht(3, "V", true);
  draaien(1, "L");
  recht(1, "V", true);
  recht(2, "A", false);
  draaien(4, "R");
  draaien(4, "R");
}

void letterX() {
  // Gecontroleerd
  //
  draaien(1, "R");
  recht(4, "V", true);
  draaien(3, "R");
  recht(1, "A", false);
  draaien(3, "R");
  recht(4, "V", true);
  draaien(1, "R");
}

void letterY() {
  // Gecontroleerd
  //
  recht(2, "V", false);
  draaien(1, "L");
  recht(3, "A", true);
  draaien(1, "R");
  recht(1, "A", true);
  recht(1, "V", false);
  draaien(1, "R");
  recht(3, "V", true);
  draaien(1, "L");
  recht(2, "A", false);
  draaien(4, "R");
  draaien(4, "R");
}

void letterZ() {
  // Gecontroleerd
  //
  recht(2, "V", false);
  draaien(4, "R");
  recht(1, "V", true);
  draaien(3, "L");
  recht(4, "A", true);
  draaien(3, "R");
  recht(1, "V", true);
}


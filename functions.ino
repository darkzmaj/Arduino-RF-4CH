/*
  A1 = A
  A3 = B
  A0 = C
  A2 = D
*/

void lamp() {

  if (digitalRead(A1)) {     // If press button A
    digitalWrite(ledPin1, HIGH);

#ifdef DEBUG
    Serial.println("A1 ON, lamp ON");
#endif
  }

  if (digitalRead(A3)) {     // If press button B
    digitalWrite(ledPin1, LOW);

#ifdef DEBUG
    Serial.println("A1 OFF, lamp OFF");
#endif
  }
}

// End lamp()
///////////////////////////////////////////////////

void nightTime() {

  if (digitalRead(A0) && digitalRead(A3)) {  // If press button B + C
    buzz();
    delay(100);
    digitalWrite(ledPin1, HIGH);



    delay(1000);
    for (int i = 0; i <= delayTime; i++) {
      delay(1000);
    }
    digitalWrite(ledPin1, LOW);

#ifdef DEBUG
    Serial.println("Night time ON");
#endif
  }
}

// End nightTime()
///////////////////////////////////////////////////

void killAll() {

  if ((digitalRead(A0)) && (digitalRead(A2))) {  // C i D


    for (int i = 0; i <= delayTime; i++) {
      delay(1000);
    }

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
  }

#ifdef DEBUG
  Serial.println("Kill everything ON");
#endif
}

// End killEverything()
///////////////////////////////////////////////////





void togglePC() {
  if (digitalRead(A2)) {
    digitalWrite(ledPin3, HIGH);
    delay (100); // Obligatory delay
    digitalWrite(ledPin3, LOW);

#ifdef DEBUG
    Serial.println("Toggle PC");
#endif
  }
}
// End togglePC()
///////////////////////////////////////////////////

void ledStrip() {

  if (digitalRead(A0)) {
    digitalWrite(ledPin2, HIGH);

#ifdef DEBUG
    Serial.println("A0 ON, led ON");
#endif
  }

  if (digitalRead(A3)) {
    digitalWrite(ledPin2, LOW);

#ifdef DEBUG
    Serial.println("A0 OFF, led OFF");
#endif
  }
}

// End ledStrip()
///////////////////////////////////////////////////

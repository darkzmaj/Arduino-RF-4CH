void ledStrip() {

  if (digitalRead(A0)) {
    digitalWrite(ledPin2, HIGH);

#ifdef DEBUG
    Serial.println("A0 ON, led ON");
#endif

  }

  if (digitalRead(A3))
    digitalWrite(ledPin2, LOW);

#ifdef DEBUG
  Serial.println("A0 OFF, led OFF");
#endif

}

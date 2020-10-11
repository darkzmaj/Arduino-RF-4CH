void nightMode() {

  if ((digitalRead(A0)) && (digitalRead(A3))) {

    for (int i = 0; i < 3; i++) {  // Sound alerts, beep beep beep
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }
    for (int i = 0; i <= delayTime; i++) {
      delay(1000);
    }
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
  }

#ifdef DEBUG
  Serial.println("Night Mode ON");
#endif

}

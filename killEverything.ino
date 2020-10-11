void killEverything() {

  if ((digitalRead(A0)) && (digitalRead(A3))) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }

    for (int i = 0; i <= delayTime; i++) {
      delay(1000);
    }

    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
  }

#ifdef DEBUG
    Serial.println("Kill everything on");
#endif
  
}

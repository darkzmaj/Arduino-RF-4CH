//Iskljuci A, sacekaj 60 sekundi, iskljuci C
void nocDelay() {
  if ((digitalRead(A0)) && (digitalRead(A3))) {

    for (int i = 0; i <= 7; i++) {
    digitalWrite(ledPin2, HIGH);
      delay(1000);
      digitalWrite(ledPin2, LOW);
      delay(1000);
    };
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);

    for (int i = 0; i <= 60; i++) {
    delay(1000);
    }
    // Potom ce se sve iskljuciti
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
  }
}

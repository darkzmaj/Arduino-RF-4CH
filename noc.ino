//Iskljuci A, sacekaj 60 sekundi, iskljuci C
void nocDelay() {
  if ((digitalRead(A0)) && (digitalRead(A3))) {
    int a = 0;
    while ( a <= 7) {
      digitalWrite(ledPin2, HIGH);
      delay(1000);
      digitalWrite(ledPin2, LOW);
      delay(1000);
      a++;
    };
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
    int cekanje = 60; // Posle koliko sekundi da se sva svetla iskljuce
    int i = 0;
    while (i <= cekanje) {
      delay(1000);
      i++;
    }
    // Potom ce se sve iskljuciti
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
  }
}

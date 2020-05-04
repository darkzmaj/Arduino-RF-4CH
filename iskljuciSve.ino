void ugasiSveDelay() {
  // Ova metoda iskljucuje svetla u kuci nakon odredjenog vremena
  // Nakon pritiska C i B na prekidacu
  // Aktivira se relej povezan na ledPin4
  // Koji ce se okinuti107 puta, kako bi oznacio pocetak rada

  if ((digitalRead(A0)) && (digitalRead(A3))) {
    for (int i = 0; i <= 10; i++ {
    digitalWrite(ledPin4, HIGH);
      delay(1000);
      digitalWrite(ledPin4, LOW);
      delay(1000);

    };

    // Posle 10 okidanja releja
    // Ukljucice se led traka i lampe
    // Koje ce ostati ukljucene koliko je navedeno u kodu ispod

    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, HIGH);

    for (int i = 0; i <= 10; i++ {
    delay(1000);
    }
    // Potom ce se sve iskljuciti
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
  }
}

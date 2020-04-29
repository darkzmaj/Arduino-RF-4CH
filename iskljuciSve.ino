void ugasiSveDelay() {
  // Ova metoda iskljucuje svetla u kuci nakon odredjenog vremena
  // Nakon pritiska C i B na prekidacu
  // Aktivira se relej povezan na ledPin4
  // Koji ce se okinuti107 puta, kako bi oznacio pocetak rada

  if ((digitalRead(A0)) && (digitalRead(A3))) {
    int a = 0;
    while ( a <= 10) {
      digitalWrite(ledPin4, HIGH);
      delay(1000);
      digitalWrite(ledPin4, LOW);
      delay(1000);
      a++;
    };

    // Posle 10 okidanja releja
    // Ukljucice se led traka i lampe
    // Koje ce ostati ukljucene koliko je navedeno u kodu ispod

    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, HIGH);
    int cekanje = 60; // Posle koliko sekundi da se sva svetla iskljuce
    int i = 0;
    while (i <= cekanje) {
      delay(1000);
      i++;
    }
    // Potom ce se sve iskljuciti
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, LOW);
  }
}

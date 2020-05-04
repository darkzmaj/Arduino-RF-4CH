void kompjuter()
{
  // Dugme D na prekidaču aktivira A2 i deaktivira nakon 100 ms.
  // Svrha je ukljucivanje kompjutera koji zahteva kratak kontakt, a ne konstantan kontakt
  if (digitalRead(A2)) {
    digitalWrite(ledPin3, HIGH);
    delay (100);
    digitalWrite(ledPin3, LOW);
  }
}

void ledTraka() {
  // Dugme C na prekidaču aktivira pin A0
  if (digitalRead(A0))
    digitalWrite(ledPin2, HIGH);

  if (digitalRead(A3))
    digitalWrite(ledPin2, LOW);
}

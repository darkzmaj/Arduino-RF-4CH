void lampa ()
{
  // Dugme A na prekidaču aktivira pin A1
  if (digitalRead(A1))
    digitalWrite(ledPin1, HIGH);

  // Dugme B na prekidaču deaktivira pin A1
  if (digitalRead(A3))
    digitalWrite(ledPin1, LOW);
}

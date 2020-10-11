void togglePC()
{
  if (digitalRead(A2)) {
    digitalWrite(ledPin3, HIGH);
    delay (100); // Obligatory delay
    digitalWrite(ledPin3, LOW);
  }

#ifdef DEBUG
  Serial.println("Toggle PC");
#endif

}

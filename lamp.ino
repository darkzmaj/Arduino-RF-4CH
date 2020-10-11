void lamp ()
{
  if (digitalRead(A1)) {
    digitalWrite(ledPin1, HIGH);
#ifdef DEBUG
    Serial.println("A1 ON, lamp off");
#endif
  }

  if (digitalRead(A3))
    digitalWrite(ledPin1, LOW);
    
#ifdef DEBUG
  Serial.println("A1 OFF, lamp off");
#endif

}

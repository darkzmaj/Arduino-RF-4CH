void buzzerTest() {
  if (returnSeconds() == 20) {
    digitalWrite(buzzer, HIGH);
    delay(100);
  }
}

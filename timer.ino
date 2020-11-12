unsigned long timeNow = 0;
unsigned long timeLast = 0;

int startingHour = 0;

int seconds = 0;

void timer() {

  timeNow = millis() / 1000;
  seconds = timeNow - timeLast;

  delay(300);

#ifdef DEBUG
  Serial.println(seconds);
#endif
}

int returnSeconds(){
  return seconds;
}

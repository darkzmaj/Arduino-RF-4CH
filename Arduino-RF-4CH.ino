// Code is written for Arduino Pro Mini and might not work on different versions of Arduino
// Author: Jovan Jovanovic

// #define DEBUG 1  // Uncomment to enable debug statements


int ledPin1 = 2; // Relay A
int ledPin2 = 3; // Relay B
int ledPin3 = 4; // Relay C
int ledPin4 = 5; // Relay D
int buzzer = 10;
int delayTime = 90; // Time in seconds


/*
  A1 = A
  A3 = B
  A0 = C
  A2 = D
*/

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  lamp();
  nightTime();
  //timer();
  //togglePC();
  //ledStrip();
  //killAll();
}

int ledPin1 = 3; //Relej A
int ledPin2 = 4; //Relej B
int ledPin3 = 5; //Relej C
int ledPin4 = 6; //Relej D

/*
  Arduino ima pinove A1, A2, A3 i A4
  Svaki od pomenutih pinova aktivira jedan relej
  Prema sledećoj šemi:

  A1 = A
  A3 = B
  A0 = C
  A2 = D

*/

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  lampa (); // Ukljuci stone lampe
  kompjuter(); // Ukljuci/iskljuci kompjuter
  ledTraka(); // Ukljuci led trake
  ugasiSveDelay(); // Iskljuci sve nakon zadatog delay-a
  nocDelay();
}

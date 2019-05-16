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
  lampa ();
  kompjuter();
  ledTraka();
  ugasiSveDelay();
  

}

void lampa ()
{
 // Dugme A na prekidaču aktivira pin A1
 if(digitalRead(A1)) 
  digitalWrite(ledPin1, HIGH);
 
 // Dugme B na prekidaču deaktivira pin A1
 if(digitalRead(A3))
  digitalWrite(ledPin1, LOW); 
}

void kompjuter() 
{
  // Dugme D na prekidaču aktivira A2 i deaktivira nakon 100 ms.
  //Svrha je ukljucivanje kompjutera koji zahteva kratak kontakt, a ne konstantan kontakt
  if(digitalRead(A2))  
  digitalWrite(ledPin2, HIGH);
  delay (100);
  digitalWrite(ledPin2, LOW);
}

void ledTraka(){
  // Dugme C na prekidaču aktivira pin A0
  if(digitalRead(A0))
  digitalWrite(ledPin3, HIGH);

  if(digitalRead(A3))
  digitalWrite(ledPin3, LOW);
}

void ugasiSveDelay(){
    if((digitalRead(A0)) && (digitalRead(A3))){
    int a = 0;
    while( a<=7){
    digitalWrite(ledPin3, HIGH);
    delay(1000);
    digitalWrite(ledPin3, LOW);
    delay(1000);
    a++;
    };
    
    
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin1, HIGH);
    int i = 0;
    while(i<15){
    delay(10000);
    i++;
    }

    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin1, LOW);


    }

      if((digitalRead(A0)) && (digitalRead(A1)))
  digitalWrite(ledPin4, LOW);
}






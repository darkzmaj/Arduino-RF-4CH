int ledPin4 = 5; //Relej D
int ledPin3 = 4; //Relej C
int ledPin2 = 3; //Relej B
int ledPin1 = 2; //Relej A

/*A1 = A
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
  komp();
  ledTraka();
  sve();
  

}

void lampa ()
{
 if(digitalRead(A1)) // ako pritisnes A
  digitalWrite(ledPin1, HIGH); //aktiviraj pin1

  if(digitalRead(A3)) //ako B
  digitalWrite(ledPin1, LOW); //iskljuci pin1
}

void komp() 
{
  if(digitalRead(A2))  //ukljuci i iskljuci pin2
  digitalWrite(ledPin2, HIGH);
  delay (100);
  digitalWrite(ledPin2, LOW);
}

void ledTraka(){
  if(digitalRead(A0))
  digitalWrite(ledPin3, HIGH);

  if(digitalRead(A3)) //c 2
  digitalWrite(ledPin3, LOW);
}

void sve(){
    if((digitalRead(A0)) && (digitalRead(A3))){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay (100);
    digitalWrite(ledPin2, LOW);
    }

      if((digitalRead(A0)) && (digitalRead(A1)))
  digitalWrite(ledPin4, LOW);
}






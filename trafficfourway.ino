const int segG = 0;
const int segF = 1;
const int segA = 2;
const int segB = 3;
const int segE = 4;
const int segD = 5;
const int segC = 6;

int First_Seg = 13;
int Yellow = 12;
int Second_Seg = 11;

void setup() {
  // put your setup code here, to run once:
pinMode (segA, OUTPUT);
pinMode (segB, OUTPUT);
pinMode (segC, OUTPUT);
pinMode (segD, OUTPUT);
pinMode (segE, OUTPUT);
pinMode (segF, OUTPUT);
pinMode (segG, OUTPUT);
pinMode(First_Seg,OUTPUT);
pinMode(Yellow,OUTPUT);
pinMode(Second_Seg,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(First_Seg, HIGH);   // turn the First_Seg on (HIGH is the voltage level)
delay(1000);               // wait for a second

Nine();
delay(1000);
Eight();
delay(1000);
Seven();
delay(1000);
Six();
delay(1000);
Five();
delay(1000);
Four();
delay(1000);
Three();
delay(1000);
Two();
delay(1000);
One();
delay(1000);
Zero();
delay(1000);

digitalWrite(First_Seg, LOW);
delay(100);
// turn the First_Seg off by making the voltage LOW
digitalWrite(Yellow, HIGH);   // turn the First_Seg on (HIGH is the voltage level)
delay(1000);               // wait for a second

digitalWrite(Yellow, LOW);    // turn the First_Seg off by making the voltage LOW
delay(100);
digitalWrite(Second_Seg, HIGH);   // turn the First_Seg on (HIGH is the voltage level)
delay(1000);               // wait for a second

Nine();
delay(1000);
Eight();
delay(1000);
Seven();
delay(1000);
Six();
delay(1000);
Five();
delay(1000);
Four();
delay(1000);
Three();
delay(1000);
Two();
delay(1000);
One();
delay(1000);
Zero();
delay(1000);

digitalWrite(Second_Seg, LOW);    // turn the First_Seg off by making the voltage LOW
delay(100);
digitalWrite(Yellow,HIGH);
delay(1000);
digitalWrite(Yellow,LOW);
}

void Zero(){
digitalWrite (segA, HIGH);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, HIGH);
digitalWrite (segE, HIGH);
digitalWrite (segF, HIGH);
digitalWrite (segG, LOW);
}

void One(){
digitalWrite (segA, LOW);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, LOW);
digitalWrite (segE, LOW);
digitalWrite (segF, LOW);
digitalWrite (segG, LOW);
}

void Two(){
digitalWrite (segA, HIGH);
digitalWrite (segB, HIGH);
digitalWrite (segC, LOW);
digitalWrite (segD, HIGH);
digitalWrite (segE, HIGH);
digitalWrite (segF, LOW);
digitalWrite (segG, HIGH);
}
void Three(){
digitalWrite (segA, HIGH);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, HIGH);
digitalWrite (segE, LOW);
digitalWrite (segF, LOW);
digitalWrite (segG, HIGH);
}
void Four(){
digitalWrite (segA, LOW);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, LOW);
digitalWrite (segE, LOW);
digitalWrite (segF, HIGH);
digitalWrite (segG, HIGH);
}
void Five(){
digitalWrite (segA, HIGH);
digitalWrite (segB, LOW);
digitalWrite (segC, HIGH);
digitalWrite (segD, HIGH);
digitalWrite (segE, LOW);
digitalWrite (segF, HIGH);
digitalWrite (segG, HIGH);
}
void Six(){
digitalWrite (segA, HIGH);
digitalWrite (segB, LOW);
digitalWrite (segC, HIGH);
digitalWrite (segD, HIGH);
digitalWrite (segE, HIGH);
digitalWrite (segF, HIGH);
digitalWrite (segG, HIGH);
}
void Seven(){
digitalWrite (segA, HIGH);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, LOW);
digitalWrite (segE, LOW);
digitalWrite (segF, LOW);
digitalWrite (segG, LOW);
}
void Eight(){
digitalWrite (segA, HIGH);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, HIGH);
digitalWrite (segE, HIGH);
digitalWrite (segF, HIGH);
digitalWrite (segG, HIGH);
}
void Nine(){
digitalWrite (segA, HIGH);
digitalWrite (segB, HIGH);
digitalWrite (segC, HIGH);
digitalWrite (segD, LOW);
digitalWrite (segE, LOW);
digitalWrite (segF, HIGH);
digitalWrite (segG, HIGH);
}


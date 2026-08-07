//buat lampu 7 segment menggunakan 7 kaki common anoda
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int pb=9;
int x=0;
int y;
void setup() {

  // put your setup code here, to run once
  
  pinMode(pb,INPUT_PULLUP);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
      pinMode(d,OUTPUT);
        pinMode(e,OUTPUT);
          pinMode(f,OUTPUT);
            pinMode(g,OUTPUT);
            Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pb) == 0){
  x = x + 1;
  Serial.println(x);
  delay(200);
}
 if (x == 10) {
  x = 0;
 }
 
 if (x == 0){
  nol();
 }
  if (x == 1){
  satu();
 }
  if (x == 2){
  dua();
 }
  if (x == 3){
  tiga();
 }
  if (x == 4){
  empat();
 }
  if (x == 5){
  lima();
 }
  if (x == 6){
  enam();
 }
  if (x == 7){
  tujuh();
 }
  if (x == 8){
  delapan();
 }
  if (x == 9){
  sembilan();
 }
}


void nol(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);
}
void satu(){
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);
}
void dua(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,0);
}
void tiga(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);
}
void empat(){
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,0);
}
void lima(){
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,0);
}
void enam(){
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
}
void tujuh(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);
}
void delapan(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
}
void sembilan(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,0);
}
//buat lampu 7 segment menggunakan 7 kaki common anoda
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int pb=9;

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
}

void loop() {
  // put your main code here, to run repeatedly:
nol();
delay(900);
satu();
delay(900);
dua();
delay(900);
tiga();
delay(900);
empat();
delay(900);
lima();
delay(900);
enam();
delay(900);
tujuh();
delay(900);
delapan();
delay(900);
sembilan();
delay(900);
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
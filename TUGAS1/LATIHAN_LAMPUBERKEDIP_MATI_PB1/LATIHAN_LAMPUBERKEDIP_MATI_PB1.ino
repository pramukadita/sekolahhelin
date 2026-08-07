int led1=3;
int pb1=4;

void setup() {
  // put your setup code here, to run once:
pinMode(pb1,INPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(4)==1){
  nyalanih();

  loop();
}
if(digitalRead(4)==1){
  matinih();
}
loop();
}
void nyalanih(){
digitalWrite(led1,1);

digitalWrite(led1,0);

nyalanih();
}

void matinih(){
digitalWrite(led1,0);

digitalWrite(led1,0);

matinih();
}


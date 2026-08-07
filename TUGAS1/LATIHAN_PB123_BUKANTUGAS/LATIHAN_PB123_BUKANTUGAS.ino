int pb1=5;
int pb2=7;
int led=8;
int led2=9;
int led3=10;
int x;
int y;

void setup() {
  // put your setup code here, to run once:
pinMode(pb1,INPUT);
pinMode(pb2,INPUT);
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(5)==1){
  nyalanih();
}
digitalWrite(led,0);
digitalWrite(led2,0);
digitalWrite(led3,0);
loop();
}
void nyalanih(){
if (digitalRead(7)==1){
loop();
}
digitalWrite(8,1);
digitalWrite(9,0);
digitalWrite(10,0);
delay(500);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,0);
delay(500);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,1);
delay(500);
nyalanih();
}
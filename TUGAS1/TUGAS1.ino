int led1=2;
int led2=3;
int led3=4;
int led4=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
 running();
 running();
 running();
 kedip();
 kedipber2();
  kedipber2();
   kedipber2();
    kedipber2();
     kedipber2();
      kedipber2();
       kedipber2();
        kedipber2();
         kedipber2();

}

void kedip(){
   // put your main code here, to run repeatedly:
digitalWrite(led2,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led1,LOW);
digitalWrite(led3,LOW);
delay(500);

digitalWrite(led2,LOW);
digitalWrite(led4,LOW);
digitalWrite(led1,HIGH);
digitalWrite(led3,HIGH);
delay(500);

}

void kedipber2(){
  
//BERGANTIAN 22
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(500);

digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(500);
}

void running(){
  
//RUNNN=NNING
digitalWrite(led1,LOW);
delay(500);
digitalWrite(led2,HIGH);
delay(500);
digitalWrite(led3,LOW);
delay(500);
digitalWrite(led4,HIGH);
delay(500);



digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led2,LOW);
delay(500);
digitalWrite(led3,HIGH);
delay(500);
digitalWrite(led4,LOW);
delay(500);
}

















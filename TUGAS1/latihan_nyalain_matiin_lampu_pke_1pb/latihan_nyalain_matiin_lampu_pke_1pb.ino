int led1=3;
int pb1=4;
int x;

void setup() {
  // put your setup code here, to run once:
pinMode(pb1,INPUT);
pinMode(led1,OUTPUT);
}

void loop() {   
  // put your main code here, to run repeatedly:


 x=digitalRead(pb1);
 if(x==1){
     delay(500);
 nyala();
}
loop();
}

void nyala(){
  digitalWrite(led1,1);
  x=digitalRead(pb1);

  if(x==1){
       delay(500);
    
    loop();
  }
  nyala();
}




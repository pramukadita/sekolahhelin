//membuktikan mengenai rangkaian low pullup menggunakan pushbutton

int pb=5;
int led=6;
int x;

void setup() {
  // put your setup code here, to run once:
pinMode(pb,INPUT_PULLUP);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x=digitalRead(pb);
Serial.println(x);
delay(500);
}




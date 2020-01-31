const int trig=3;
const int echo=2;
const int rm1=8;
const int rm2=9;
const int lm1=10;
const int lm2=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
  digitalWrite(3,HIGH);
  delayMicroseconds(1000);
  digitalWrite(3,LOW);
  duration=pulseIn(2,HIGH);
  distance=(duration/2)/26;
  delay(10);
  if(distance>30)
  {
   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
   digitalWrite(11,HIGH);
  }
  else if(distance<=30)
  {
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   delay(1000);
   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,HIGH);
   delay(400);
  }
}

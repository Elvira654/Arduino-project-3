int crveno=10;
int zuto=9;
int zeleno=8;
int zelenoP=6;
int crvenoP=7;
int button=5;
int i=0;

void buttonPress(){

  }

void setup() {
    
pinMode(crveno,OUTPUT);
pinMode(zuto,OUTPUT);
pinMode(zeleno,OUTPUT);
pinMode(zelenoP,OUTPUT);
pinMode(crvenoP,OUTPUT);
pinMode(button,INPUT);
digitalWrite(crveno,LOW);
digitalWrite(zuto,LOW);
digitalWrite(zeleno,LOW);
}

void loop() {
  
  i=0;
digitalWrite(crvenoP,LOW);
digitalWrite(crveno,HIGH);
digitalWrite(zelenoP,HIGH);
delay(5000);
digitalWrite(zelenoP,LOW);
delay(1000);
digitalWrite(zelenoP,HIGH);
delay(1000);
digitalWrite(zelenoP,LOW);
digitalWrite(crvenoP,HIGH);
digitalWrite(zuto,HIGH);

  delay(1000);

  digitalWrite(crveno,LOW);
  digitalWrite(zuto,HIGH);
  digitalWrite(zuto,LOW);
  digitalWrite(zeleno,HIGH);

  while(i<64){
    if(digitalRead(button))
    break;
    delay(125);
    i++;
    }

digitalWrite(zeleno,LOW);
delay(1000);
digitalWrite(zeleno,HIGH);
delay(1000);
digitalWrite(zeleno,LOW);
digitalWrite(zuto,HIGH);
delay(2000);
digitalWrite(zuto,LOW);


}

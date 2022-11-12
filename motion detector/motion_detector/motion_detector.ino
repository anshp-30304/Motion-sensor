// led pins 
int l1 = 13;
int l2 = 12;
int l3 = 11;
int l4 = 8;
int l5 = 5;
int l6 = 4;
int interval = 300;
// ultrasonic sensor HC-SR01  pins
int trig=7;
int echo=6;

long timeInMicro;

long distanceInCm;

void setup() 
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,INPUT);
}

void loop()  
{


 timeInMicro= pulseIn(echo,HIGH);

 distanceInCm = ((timeInMicro/29)/2);

 Serial.println(distanceInCm);
 delay(100);
 if (distanceInCm <= 100){
   interval = distanceInCm * 3;
   blink();
 }
}

// blink function for leds 
// if you want more LED's then copy and past below code 
/*
 digitalWrite(pin_number, HIGH);
  delay(interval);
  digitalWrite(pin_number, LOW);
  delay(interval);
*/
// also don't forgot to write pin mode in  void setup()
void blink(){
  digitalWrite(l1, HIGH);
  delay(interval);
  digitalWrite(l1, LOW);
  delay(interval);

  digitalWrite(l2, HIGH);
  delay(interval);
  digitalWrite(l2, LOW);
  delay(interval);

  digitalWrite(l3, HIGH);
  delay(interval);
  digitalWrite(l3, LOW);
  delay(interval);

  digitalWrite(l4, HIGH);
  delay(interval);
  digitalWrite(l4, LOW);
  delay(interval);

  digitalWrite(l5, HIGH);
  delay(interval);
  digitalWrite(l5, LOW);
  delay(interval);

  digitalWrite(l6, HIGH);
  delay(interval);
  digitalWrite(l6, LOW);
  delay(interval);
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
}

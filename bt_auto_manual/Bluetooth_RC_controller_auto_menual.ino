#include <SoftwareSerial.h>

//motor A Right
 int const EN_A       = 5;
 int const IN1        = 4;
 int const IN2        = 3;
 //motor B left
 int const EN_B       = 6;
 int const IN3        = 8;
 int const IN4        = 7;
 char command = 'S';
 int velocity = 255;
 //UltraSonic
 int const trig       = 9;
 int const echo       = 10;
 int const nearest   = 90;
 
 boolean auto_system = false;
 
SoftwareSerial mySerial(12,11); 


void setup() {
  Serial.begin(9600);
  mySerial.begin(57600);
  for(int i=3;i<=9;i++){
    pinMode(i, OUTPUT);
  }
  
}

void loop() {
  if(mySerial.available() > 0) {
    command = mySerial.read();
    if(!auto_system) {
      menual_car();
    }
    else if(auto_system) {
      auto_car();     
    }    
  }
}







 

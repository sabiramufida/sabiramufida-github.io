#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(9, HIGH);
  Serial.println ("Enter AT Commands: ");
  mySerial.begin (38400);
}

  void loop() {
    if(Serial.available()){
      char data = Serial.read();
      Serial.println(data);

      if(data == '1'){
        digitalWrite(13, HIGH);
      }
      else{
        digitalWrite(13, LOW);
      }
    }
  }

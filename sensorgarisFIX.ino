#include "garis.h"
void setup(){
  setupGaris();
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
}


void loop() {
  cekGaris();
  delay(2);
//  for(int a=1;a<6;a++)
//  {
//    Serial.print(nsensor[a]);Serial.print("  ");
//  }
//  Serial.println(" ");
}

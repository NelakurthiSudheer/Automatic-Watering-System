#include <DS3231.h>

int Relay = 4;

DS3231  rtc(SDA, SCL);
Time t;

const int OnHour = 12;
const int OnMin = 05;
const int OffHour = 12;
const int OffMin = 07;

void setup() {
  Serial.begin(115200);
  rtc.begin();
  pinMode(Relay, OUTPUT);
  digitalWrite(Relay, HIGH); //In this case the relay takes high = 0/OFF and low = 1/ON
}
void loop() {
  t = rtc.getTime();
  Serial.print(t.hour);
  Serial.print(" hour(s), ");
  Serial.print(t.min);
  Serial.print(" minute(s)");
  Serial.println(" ");
  delay (1000);
  
  if(t.hour == OnHour && t.min == OnMin){
    digitalWrite(Relay,LOW); //On-1
    Serial.println("Watering the plant/ON");
    }
    
    else if(t.hour == OffHour && t.min == OffMin){
      digitalWrite(Relay,HIGH); //Off-0
      Serial.println("Watering stopped/OFF");
    }
}

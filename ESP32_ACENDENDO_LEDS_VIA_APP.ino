#define BLYNK_TEMPLATE_ID "TMPL2NaPf673Z"
#define BLYNK_TEMPLATE_NAME "acender led"
#define BLYNK_AUTH_TOKEN "ydbAEgunxy-R2D_aXS9NAr23EUIFN20k"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid [] =  "marcos";
char pass [] = "12345678";

void setup() {
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
}

BLYNK_WRITE(V0){
  int pinValue = param.asInt();
  digitalWrite(2, pinValue);
}
BLYNK_WRITE(V1){
  int pinValue = param.asInt();
  digitalWrite(16, pinValue);
}
BLYNK_WRITE(V2){
  int pinValue = param.asInt();
  digitalWrite(15, pinValue);
}

void loop() {
  Blynk.run();
}

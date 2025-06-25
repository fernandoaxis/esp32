#define BLYNK_TEMPLATE_ID "TMPL2G4DQxbsw"
#define BLYNK_TEMPLATE_NAME "Teste 1"
#define BLYNK_AUTH_TOKEN "CzWrxKmNquVQttaPYK-EM9Gb0HVYaHmb"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Galaxy J8FBBB";
char pass[] = "12345678";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  ledcSetup(1, 1000, 8);
  ledcAttachPin(25, 1);

}

BLYNK_WRITE(V0){
   int brilho = param.asInt();
   ledcWrite(1, brilho);
    
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}

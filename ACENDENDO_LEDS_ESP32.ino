int led = 15;
int botao = 13;
bool ledAcesso = true;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(botao) == LOW && ledAcesso){
      digitalWrite(led, HIGH);
      ledAcesso = false;
      delay(200);
    }
        
    if(digitalRead(botao) == LOW && !ledAcesso){
      digitalWrite(led, LOW);
      ledAcesso = true;
      delay(200);
      }

}

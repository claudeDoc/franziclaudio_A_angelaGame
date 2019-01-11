void setup() {
  // put your setup code here, to run once:


  int LEDrosso = 8;
  int LEDblu = 9;

}

void loop() {
  // put your main code here, to run repeatedly:


  if (digitalRead(LEDrosso) == HIGH)
  {
    digitalWrite(LEDrosso) = LOW;
  }

  
}

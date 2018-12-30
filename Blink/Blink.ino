void setup() {
  // put your setup code here, to run once:
  pinMode(PA6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PA6, HIGH);
  delay(1000);
  digitalWrite(PA6, LOW);
  delay(1000);
}

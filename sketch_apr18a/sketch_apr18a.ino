void setup() {
  Serial.begin(9600);
}

void loop() {
//  Serial.print("available : ");
//  Serial.println(Serial.available());
//  delay(1000);
  if (Serial.available())
  {
    Serial.println(Serial.read());
  }
}

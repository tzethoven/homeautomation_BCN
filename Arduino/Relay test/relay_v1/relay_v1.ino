void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  Serial.begin(9600);

  while (!Serial) {};
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(7, HIGH);
  Serial.println("High");
  delay(5000);
  
  digitalWrite(7, LOW);
  Serial.println("Low");
  delay(5000);

}

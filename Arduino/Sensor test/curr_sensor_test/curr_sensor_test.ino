const double sense_high = 3.245;
const double sense_low = 1.575;

const double curr_high = 5;
const double curr_low = -5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while (!Serial) {};
}

void loop() {
  // put your main code here, to run repeatedly:

  
  int val_raw = analogRead(A0);
  double val_volt = double(val_raw) * 5/1024;

  double curr = (val_volt-sense_low)/(sense_high-sense_low) * (curr_high-curr_low) + curr_low;
  
  Serial.print("Value: ");
  Serial.println(curr);
  delay(1000);
  
  

}

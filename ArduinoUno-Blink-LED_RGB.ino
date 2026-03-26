int Red = 13;
int Blue = 12;
int Green = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode (Red, OUTPUT);
  pinMode (Blue, OUTPUT);
  pinMode (Green, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Red, HIGH);
  delay(10000);
  digitalWrite(Red, LOW);
  delay(1000);
  digitalWrite(Blue, HIGH);
  delay(10000);
  digitalWrite(Blue, LOW);
  delay(1000);
  digitalWrite(Green, HIGH);
  delay(10000);
  digitalWrite(Green, LOW);
  delay(1000);
}

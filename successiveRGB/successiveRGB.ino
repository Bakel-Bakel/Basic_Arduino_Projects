int red = 2;
int green = 3;
int blue = 4;

void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);

}

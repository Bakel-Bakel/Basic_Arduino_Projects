int led_1 = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(led_1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_1, HIGH);
delay(500);
digitalWrite(led_1, LOW);
delay(500);
}

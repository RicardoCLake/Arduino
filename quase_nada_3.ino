void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
delay(100);
}

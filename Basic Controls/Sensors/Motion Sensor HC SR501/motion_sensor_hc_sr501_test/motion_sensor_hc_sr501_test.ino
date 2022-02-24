int ledPin = A5;
int pirPin = A2; //pir passive infrared

int pirValue;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(pirPin, INPUT);

digitalWrite(ledPin, LOW);
}

void loop() {
pirValue = digitalRead(pirPin);
digitalWrite(ledPin, pirValue);
Serial.println(pirValue);
}

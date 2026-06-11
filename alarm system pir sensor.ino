const int pirPin = 2;
const int ledPin = 13;
const int buzzerPin = 8;

bool pirState = LOW;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 3000);
    Serial.println("Motion Detected");
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(50);   // Sirf 50 ms, continuous detection ke liye
}

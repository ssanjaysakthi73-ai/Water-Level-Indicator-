// Water Level Indicator Project

int sensorPin = A0;
int ledLow = 2;
int ledMedium = 3;
int ledHigh = 4;
int buzzer = 5;

void setup() {
  pinMode(ledLow, OUTPUT);
  pinMode(ledMedium, OUTPUT);
  pinMode(ledHigh, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int waterLevel = analogRead(sensorPin);

  if (waterLevel < 300) {
    digitalWrite(ledLow, HIGH);
    digitalWrite(ledMedium, LOW);
    digitalWrite(ledHigh, LOW);
    digitalWrite(buzzer, LOW);
  }
  else if (waterLevel < 700) {
    digitalWrite(ledLow, HIGH);
    digitalWrite(ledMedium, HIGH);
    digitalWrite(ledHigh, LOW);
    digitalWrite(buzzer, LOW);
  }
  else {
    digitalWrite(ledLow, HIGH);
    digitalWrite(ledMedium, HIGH);
    digitalWrite(ledHigh, HIGH);
    digitalWrite(buzzer, HIGH);
  }

  delay(500);
}

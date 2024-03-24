// Pin definitions
const int smokeSensorPin = 7;  // Digital pin for the MQ2 sensor
const int buzzerPin = 8;        // Digital pin for the buzzer
const int ledPin = 13;          // Digital pin for the LED

void setup() {
  // Initialize the digital pins
  pinMode(smokeSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the digital value from the MQ2 sensor
  int smokeDetected = digitalRead(smokeSensorPin);
  
  // Check if smoke is detected
  if (smokeDetected == LOW) {
    // If smoke is detected, sound the buzzer and turn on the LED
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(1000);  // Sound and LED on for 1 second
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(1000);  // Pause for 1 second
  }
}

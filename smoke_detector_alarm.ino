#define MQ2_PIN A0  // Define the analog pin for the MQ2 sensor
const int ledPin = 6; // Define the pin for the LED/buzzer

void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // Set the LED/buzzer pin as output
  delay(4000); // Delay to allow the MQ2 sensor to warm up
}

void loop() {
  // Read the input on analog pin 0 (the MQ2 sensor)
  int sensorValue = analogRead(MQ2_PIN);
  
  if (sensorValue >= 210 && sensorValue < 250) {
    Serial.println(sensorValue);
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(200);
  } 
  else if (sensorValue >= 250) {
    Serial.println(sensorValue);
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  } 
  else {
    digitalWrite(ledPin, LOW); // Ensure the LED/buzzer is off if sensorValue is below 210
  }
  
  delay(20); // Delay in between reads for stability
}

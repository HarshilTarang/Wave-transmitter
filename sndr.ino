const int wavePin = 9;  // Pin to generate square wave

void setup() {
  pinMode(wavePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Generate a square wave
  digitalWrite(wavePin, HIGH);
  delayMicroseconds(500);  // Adjust as needed
  digitalWrite(wavePin, LOW);
  delayMicroseconds(500);  // Adjust as needed

  // Optional delay to control the rate of data transmission
  delay(1);
}

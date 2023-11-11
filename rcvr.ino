const int receivedDataPin = 2;  // Pin to receive data from the square wave generator Arduino

void setup() {
  pinMode(receivedDataPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the data from the square wave generator Arduino
  int receivedData = digitalRead(receivedDataPin);

  // Send the data to Serial Plotter
  Serial.println(receivedData);

  // Optional delay to control the rate of data transmission
  delay(1);
}

// Freenove UNO-compatible V4.1: photoresistor divider on A0.
// One raw 10-bit ADC reading per line, nominally 10 samples/second.
void setup() {
  Serial.begin(115200);
}

void loop() {
  int lightReading = analogRead(A0);
  Serial.println(lightReading);
  delay(100);
}

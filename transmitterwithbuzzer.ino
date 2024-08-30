const int xPin = A0;
const int yPin = A1;
const int zPin = A2;

const float referenceVoltage = 5.0; // Change to 3.3 if using 3.3V power supply
const float sensitivity = 0.20; // mV per mg (milli-g)

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud
}

void loop() {
  int xRaw = analogRead(xPin);
  int yRaw = analogRead(yPin);
  int zRaw = analogRead(zPin);

  float xVolts = (xRaw / 1023.0) * referenceVoltage;
  float yVolts = (yRaw / 1023.0) * referenceVoltage;
  float zVolts = (zRaw / 1023.0) * referenceVoltage;

  float xAccel = (xVolts - (referenceVoltage / 2.0)) / sensitivity;
  float yAccel = (yVolts - (referenceVoltage / 2.0)) / sensitivity;
  float zAccel = (zVolts - (referenceVoltage / 2.0)) / sensitivity;

  const char* message = nullptr;

  if (yAccel < -5.3) {
    message = "Water";
  } else if (yAccel > -3.5) {
    message = "Washroom";
  } else if (xAccel < -5.4) {
    message = "Emergency";
  } else if (xAccel > -3.6) {
    message = "Hungry";
  } else{
    message = "Waiting";
  }

  if (message != nullptr) {
    Serial.println(message);
    Serial.flush(); // Ensure the message is sent completely
  }

  delay(1000);
}

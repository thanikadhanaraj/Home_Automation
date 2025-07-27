#include <PS4Controller.h>

// Relay control pins
const int relay1 = 19;  // Controlled by Cross button
const int relay2 = 18;  // Controlled by Circle button
const int relay3 = 17;  // Controlled by Square button

void setup() {
  Serial.begin(115200);

  // Set GPIO pins as outputs
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);

  // Start Bluetooth PS4 pairing
  PS4.begin("00:00:00:00:00:00");  // Replace with your ESP32 Bluetooth MAC address
  Serial.println("Ready to connect to PS4 controller");
}

void loop() {
  if (PS4.isConnected()) {
    // Button: Cross -> Toggle Relay 1 (GPIO 19)
    if (PS4.data.button.cross) {
      Serial.println("Cross pressed -> Relay 1 ON");
      digitalWrite(relay1, HIGH);
    }

    // Button: Circle -> Toggle Relay 2 (GPIO 18)
    if (PS4.data.button.circle) {
      Serial.println("Circle pressed -> Relay 2 ON");
      digitalWrite(relay2, HIGH);
    }

    // Button: Square -> Toggle Relay 3 (GPIO 17)
    if (PS4.data.button.square) {
      Serial.println("Square pressed -> Relay 3 ON");
      digitalWrite(relay3, HIGH);
    }

    // Button: Triangle -> All OFF (for example)
    if (PS4.data.button.triangle) {
      Serial.println("Triangle pressed -> All Relays OFF");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
    }

    delay(100); // Small delay to avoid flooding serial
  }
}

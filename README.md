# Home_Automation
Control home appliances wirelessly using a PS4 DualShock 4 controller paired over Bluetooth with an ESP32 microcontroller.
This project uses PS4 buttons to control multiple relay modules, enabling wireless switching of devices like lights, fans, or motors.

🎯 Features
🔗 Wireless control via Bluetooth Classic

🎮 Control up to 3 appliances using PS4 buttons:

Cross → Relay 1 (GPIO 19)

Circle → Relay 2 (GPIO 18)

Square → Relay 3 (GPIO 17)

Triangle → Turns OFF all relays

⚡ Compatible with most 5V relay modules

💡 Ideal for home automation and smart control projects

📦 Hardware Requirements
ESP32 Dev Board

PS4 DualShock Controller

3-Channel Relay Module

Jumper Wires

USB cable for flashing

Power supply (for relays if needed)

🧠 Software Requirements
Arduino IDE with ESP32 Board Package

PS4-esp32 Library

SixaxisPairTool (for initial Bluetooth pairing)

🚀 Setup Instructions
Install the PS4 library in Arduino IDE

Find your ESP32’s Bluetooth MAC address using the sample code

Use SixaxisPairTool to pair your PS4 controller with that MAC

Connect the relays to GPIOs 19, 18, 17

Flash the Arduino sketch to your ESP32

Power the ESP32 → Press PS button on the controller → Enjoy wireless control!


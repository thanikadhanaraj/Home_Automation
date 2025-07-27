### Home_Automation
Control home appliances wirelessly using a PS4 DualShock 4 controller paired over Bluetooth with an ESP32 microcontroller.
This project uses PS4 buttons to control multiple relay modules, enabling wireless switching of devices like lights, fans, or motors.

# Steps
 1.Wireless control via Bluetooth Classic

2.Control up to 3 appliances using PS4 buttons:

3.Cross → Relay 1 (GPIO 19)

4.Circle → Relay 2 (GPIO 18)

5.Square → Relay 3 (GPIO 17)

6.Triangle → Turns ON all relays

--> Compatible with most 5V relay modules

--> Ideal for home automation and smart control projects

## Hardware Requirements
1.ESP32 Dev Board

2.PS4 DualShock Controller

3. 3-Channel Relay Module

4.Jumper Wires

5. USB cable for flashing

6.Power supply (for relays if needed)

## Software Requirements
1. Arduino IDE with ESP32 Board Package

2. PS4-esp32 Library

3. SixaxisPairTool (for initial Bluetooth pairing)

# Setup Instructions
Install the PS4 library in Arduino IDE

Find your ESP32’s Bluetooth MAC address using the sample code

Use SixaxisPairTool to pair your PS4 controller with that MAC

Connect the relays to GPIOs 19, 18, 17

Flash the Arduino sketch to your ESP32

Power the ESP32 → Press PS button on the controller → Enjoy wireless control!


# Smoke Detector Alarm Using Arduino

This project is an early warning system for fire prevention and security, utilizing an Arduino Uno, an MQ2 gas sensor, and a simple alarm system. The system detects smoke levels and triggers an alarm when dangerous levels are detected.

## Components Used
- Arduino Uno
- MQ2 Gas Sensor
- LED/Buzzer
- Resistors
- Jumper Wires
- Breadboard

## How It Works
The MQ2 gas sensor detects the presence of smoke and outputs an analog signal corresponding to the smoke level. The Arduino reads this signal and, based on the predefined thresholds, triggers an alarm using an LED or buzzer. The system prints the sensor values to the serial monitor for monitoring purposes.

## Code Explanation
The provided code reads the analog value from the MQ2 sensor and triggers an alarm if the value exceeds certain thresholds. It uses the `analogRead` function to read the sensor values and the `digitalWrite` function to control the LED or buzzer.

## Setup Instructions
1. Connect the MQ2 sensor to the Arduino Uno.
   - VCC to 5V
   - GND to GND
   - AOUT to analog pin A0
2. Connect the LED/buzzer to digital pin 6 of the Arduino.
3. Upload the provided code to the Arduino using the Arduino IDE.
4. Open the Serial Monitor to view the sensor values and observe the LED/buzzer behavior when smoke is detected.

## Future Improvements
- Add a more sophisticated alarm system with different alert levels.
- Integrate with a GSM module to send SMS alerts.
- Use a more sensitive and accurate smoke sensor.

## License
This project is open-source and available under the MIT License.

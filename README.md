# Owner Avatar with Weight Sensor Module

This project demonstrates how to use an HX711 load cell module with an Arduino to measure weight and represent an owner's avatar through an LED indicator.

## Components Required

- **Arduino Board** (e.g., Arduino Uno)
- **HX711 Load Cell Module**
- **Load Cell**
- **LED** (optional, to represent the owner avatar)
- **220Ω Resistor** (for the LED)
- **Jumper Wires**

## Circuit Connections

1. **Load Cell to HX711**: Connect according to the manufacturer's instructions.
2. **HX711 to Arduino**:
   - VCC to 5V
   - GND to GND
   - DT to Digital Pin 2
   - SCK to Digital Pin 3
3. **LED (Optional)**:
   - Anode (long leg) to Digital Pin 4
   - Cathode (short leg) to GND through a 220Ω resistor.

## Code Overview

The provided code uses the `HX711` library to read weight data from the load cell. The weight is printed to the Serial Monitor, and an LED indicates the owner's avatar status based on the weight detected.

### Code Structure

1. **Include Libraries**: Import necessary libraries for HX711.
2. **Pin Configuration**: Define pins for the load cell and LED.
3. **Setup**: Initialize serial communication, the scale, and tare the scale.
4. **Loop**: Read weight, print it to the Serial Monitor, and control the LED based on weight thresholds.

## Installation Instructions

1. Install the [HX711 library](https://github.com/bogde/HX711) using the Arduino Library Manager.
2. Open the Arduino IDE and create a new sketch.
3. Copy and paste the provided code into the sketch.
4. Upload the code to your Arduino board.
5. Open the Serial Monitor to view weight readings.

## Usage

1. Place the object to be weighed on the load cell.
2. Observe the weight readings in the Serial Monitor.
3. The LED will light up when the weight is within the predefined range, representing the owner's avatar.

## Customization

- Adjust the `calibration_factor` in the code to suit your load cell for accurate readings.
- Modify weight thresholds to fit your specific application.
- Replace the LED indicator with a different output method if desired.

## License

This project is open-source and available for anyone to use and modify.

## Acknowledgments

- [Arduino](https://www.arduino.cc/)
- [HX711 Library](https://github.com/bogde/HX711)

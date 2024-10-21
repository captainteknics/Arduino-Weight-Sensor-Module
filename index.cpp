#include <HX711.h>

// Pin configuration
const int LOADCELL_DOUT_PIN = 2; // Data pin
const int LOADCELL_SCK_PIN = 3;   // Clock pin
const int LED_PIN = 4;            // Pin for owner avatar (LED)

// Create HX711 object
HX711 scale;

// Calibration factor for the load cell
float calibration_factor = 2280; // Adjusting this value based on your calibration

void setup() {
    Serial.begin(9600); // Start serial communication
    scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN); // Initialize the scale
    scale.set_scale(calibration_factor); // Set the calibration factor
    scale.tare(); // Reset the scale to 0

    pinMode(LED_PIN, OUTPUT); // Set LED pin as output
    Serial.println("Place the object on the scale...");
}

void loop() {
    // Get the weight in grams
    float weight = scale.get_units(10); // Average of 10 readings
    Serial.print("Weight: ");
    Serial.print(weight);
    Serial.println(" g");

    // Check weight thresholds to simulate owner avatar
    if (weight > 0 && weight < 1000) {
        // Weight within a certain range (for demonstration)
        digitalWrite(LED_PIN, HIGH); // Turn on LED for owner avatar
    } else {
        digitalWrite(LED_PIN, LOW); // Turn off LED
    }

    // Add a delay for readability
    delay(1000);
}

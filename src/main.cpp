#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author RUDRAKSHA SHARMA (Git- rudraksha-sh )
 * @date 2026-01-18
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

// TODO 1:
#define LDRPIN A0

// TODO 2:
int ldrValue = 0;

void setup() {

    // TODO 3:
    Serial.begin(9600);

    // TODO 4:
    Serial.println("LDR setup");
}

void loop() {

    // TODO 5:
    ldrValue = analogRead(LDRPIN);

    // TODO 6:
    Serial.print("LDR Reading: ");
    Serial.println(ldrValue);

    // TODO 7: Apply threshold logic (Bright / Dark detection)
    if (ldrValue > 600) {
        // TODO 8: Print brightness status
        Serial.println("Status: Bright Environment");
    } else {
        Serial.println("Status: Dark Environment");
    }

    // TODO 9: Add delay (500ms or 1 second)
    delay(1000);
}
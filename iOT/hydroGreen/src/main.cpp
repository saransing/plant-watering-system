#include <Arduino.h>

#define RELAY_PIN 7 // Relay control pin

void setup()
{
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Ensure pump is OFF at the start
}

void loop()
{
  Serial.println("Turning pump ON...");
  digitalWrite(RELAY_PIN, HIGH); // Turn ON pump
  delay(5000);                   // Pump runs for 5 seconds

  Serial.println("Turning pump OFF...");
  digitalWrite(RELAY_PIN, LOW); // Turn OFF pump

  Serial.println("Waiting 1 minute before next activation...");
  delay(60000); // Wait 1 minute before running again
}

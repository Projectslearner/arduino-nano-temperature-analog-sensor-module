/*
    Project name : Temperature Analog sensor module
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-temperature-analog-sensor-module
*/

// Define the analog pin connected to the temperature sensor
const int sensorPin = A0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the sensor
  int sensorValue = analogRead(sensorPin);

  // Convert the analog value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert the voltage to temperature in Celsius
  float temperatureC = voltage * 100.0;

  // Print the temperature to the Serial Monitor
  Serial.print("Temperature (C): ");
  Serial.println(temperatureC);

  // Add a short delay before taking the next reading
  delay(1000);
}

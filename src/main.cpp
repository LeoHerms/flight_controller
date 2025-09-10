#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>

// Create BNO055 instance
Adafruit_BNO055 bno = Adafruit_BNO055(55);

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  
  // TODO: You add the I2C initialization here
  // Hint: Wire.begin(SDA_pin, SCL_pin);
  
  // TODO: You add BNO055 initialization here  
  // Hint: Check if bno.begin() returns true
  
  Serial.println("IMU initialized!");
}

void loop() {
  // TODO: You create variables to store orientation data
  // Hint: You'll need roll, pitch, yaw variables
  
  // TODO: You get the orientation data from BNO055
  // Hint: Look up bno.getVector() in Adafruit docs
  
  // TODO: You print the data to serial
  Serial.println("Hello, IMU!");
  delay(100);  // 10Hz update rate
}
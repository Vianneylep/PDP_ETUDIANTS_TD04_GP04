#include <Arduino.h>
#include <DHT.h>
// Define the pins that we will use
#define SENSOR 33
#define LED 26


 #define DHTPIN 3

 #define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  dht.begin();
}

void loop() {

 Serial.println("Temperature = " + String(dht.readTemperature())+" °C");
  Serial.println("Humidite = " + String(dht.readHumidity())+" %");
  delay(5000);
}
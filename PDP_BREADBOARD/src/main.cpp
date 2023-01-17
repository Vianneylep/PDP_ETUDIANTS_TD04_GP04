#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>

// Define the pins that we will use
#define SENSOR 33
#define LED 26

#define DHTTYPE DHT11

DHT dht(SENSOR, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

Serial.begin(9600); 

  dht.begin();
  
  float humidite = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.print("Humidité: "); 
  Serial.println(humidite);
  Serial.print("Température:"); 
  Serial.println(temperature);
  esp_sleep_enable_timer_wakeup(5000000);
  esp_deep_sleep_start();

}
void loop() {}
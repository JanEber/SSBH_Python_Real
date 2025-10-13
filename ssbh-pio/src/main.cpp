#include <Arduino.h>
#include <DHT.h>
#include <WiFi.h>



#define DHTPIN x
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE)
WiFiServer server(80); 
WiFiClient client;









// put function declarations here:
int myFunction(int, int);


void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  serial.begin(9600)
  WiFi.begin("MAGNUS-69", "SUNGAM-69");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
}
  client.connect()//specify connection
  dht.begin()
  

  float humidity = dht.readHumidity()
  float temperature = dht.readTemperature()

   // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }


    float hic = dht.computeHeatIndex(t, h, false);

    Serial.print(hic)
    client.write(humidity, temperature)

    




}

void loop() {
  // put your main code here, to run repeatedly:
  //Read and post every 5 Mins
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
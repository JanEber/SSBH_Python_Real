#include <Arduino.h>
#include <DHT.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>





//#define DHTPIN 23; //change
//#define DHTTYPE DHT22;

//DHT dht(DHTPIN, DHTTYPE);
WiFiServer server(80); 
WiFiClient client;
HTTPClient http;



// float humidity = dht.readHumidity(false);
// float temperature = dht.readTemperature(false);


// Stream& output; JSON

// JsonDocument doc;

// doc["sensor"] = "temperature";
// doc["time"] = 1351824120;
// doc["date"] = "12.23.2033";
// doc["temp"] = 23;

// doc.shrinkToFit();  // optional

// serializeJson(doc, output);

// put function declarations here:
int myFunction(int, int);


void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  Serial.begin(9600);
  WiFi.begin("MAGNUS-69", "SUNGAM-69");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
}
  http.begin("http://10.42.24.52:8000"); //http.begin(client, "http://10.42.24.52:8000");??
  //dht.begin();


  http.addHeader("Content-Type", "text/plain");

  int httpResponseCode = http.POST("Hello Mamamumu!");
  http.end();


  //float hic = dht.computeHeatIndex(temperature, humidity, false); ///MAYBE ABOVE
  //Serial.print(hic);
  
    

}
void loop() {  // put your main code here, to run repeatedly:
  //Read and post every 5 Mins
  delay(5000);
  http.begin(client, "http://10.42.24.52:8000");
  int httpResponseCode = http.POST("Hello Mamamumu!");
  http.end();


  
  

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
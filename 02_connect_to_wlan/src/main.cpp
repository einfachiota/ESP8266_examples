#include <ESP8266WiFi.h>

char ssid[] = "<YOUR_SSID>";       //  your network SSID (name)
char pass[] = "<YOUR_PASSWORD>"; // your network password

void setup()
{

    // We start by connecting to a WiFi network
    Serial.begin(115200);
    Serial.println();
    Serial.print("Wifi connection to ");
    Serial.println(ssid);
    Serial.println(ssid);
    WiFi.begin(ssid, pass);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop()
{
    
}

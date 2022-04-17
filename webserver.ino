#include <WiFi.h>
#include <WebServer.h>
#include "home.h"

#define LED 4

const char *ssid = "nom wifi ou hospot";
const char *password = "mot de passe wifi";


WebServer server(80);

void ActionOn()
{
    digitalWrite(LED, HIGH);
    server.sendHeader("Location","/");
    server.send(303);
}

void ActionOff()
{
    digitalWrite(LED, LOW);
    server.sendHeader("Location","/");
    server.send(303);
}

void pageIntrouvable()
{
    server.send(404, "text/plain", "404: page introuvable");
}

void homePage()
{
    server.send(200, "text/html", Home);
}

void setup() {
  Serial.begin(115200);
    delay(1000);
    Serial.println("\n");

    pinMode(LED, OUTPUT);

    WiFi.persistent(false);
    WiFi.begin(ssid, password);
    Serial.print("Tentative de connexion...");

    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(100);
    }

    Serial.println("\n");
    Serial.println("Connexion etablie!");
    Serial.print("Adresse IP: ");
    Serial.println(WiFi.localIP());

    server.on("/", homePage);
    server.on("/on", ActionOn);
    server.on("/off", ActionOff);
    server.onNotFound(pageIntrouvable);
    server.begin();

    Serial.println("Serveur web disponible!");

}

void loop() {
  server.handleClient();

}

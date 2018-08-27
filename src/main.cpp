
// Library
#include <FS.h>                   
#include <TaskScheduler.h>
#include <DNSServer.h>
#include <ESP8266WiFi.h>          //https://github.com/esp8266/Arduino
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266httpUpdate.h>
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager
#include <ArduinoJson.h>         

// Config
#include "config.h"

// Tasks
#include "filesystem.h"
#include "wifi.h"

// Defines do TaskScheduler
#define _TASK_SLEEP_ON_IDLE_RUN
#define _TASK_STATUS_REQUEST

// global variables
char mqtt_server[40];
char mqtt_port[6] = "8080";
char blynk_token[33] = "YOUR_BLYNK_TOKEN";
//default custom static IP
char static_ip[16] = "10.0.1.56";
char static_gw[16] = "10.0.1.1";
char static_sn[16] = "255.255.255.0";
bool shouldSaveConfig = false;


//Task tConnect (TASK_SECOND, TASK_FOREVER, &connectInit, &ts, true);




void setup() {

  Serial.begin(115200);
  Serial.println();

  MountFS();
  WiFiConfig();
}

void loop() {

}
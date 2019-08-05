/************ WIFI and MQTT INFORMATION (CHANGE THESE FOR YOUR SETUP) ******************/
#define hostName "digoo433Weather"  

#define wifiSSID "SSID"
#define wifiPass "password"

#define mqttHost "192.168.1.1" // mqtt IP/name
#define mqttPort 1883
#define mqttUser "DVES_USER"
#define mqttPass "password"

#define mqttBirth "Online"
#define mqttDeath "Offline"

/******* HTTP /flash page ID/pass **********/
const char* update_username = "admin";
const char* update_password = "OTAadmin"; // change this to a password you want to use when you upload via HTTP

/******* Debug **************/
#define DEBUGSERIAL
#define DEBUGTELNET  // Open a read-only telnet debug port

/******* OTA **************/
int OTAport = 8266;
#define OTApassword "OTAadmin" // change/uncomment this to a password you want to use when you upload OTA

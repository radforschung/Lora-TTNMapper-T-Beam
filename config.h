#ifndef LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
#define LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED

// *****************************************
// DEBUG
// Define this Macro to increase verbosity and update interval

// #define DEBUG 1

// *****************************************


// *****************************************
// HARDWARE SPECIFICS

#define BUILTIN_LED 14
#define BATTERY_VOLTAGE 35
#define HAS_IMU MPU9250

// *****************************************
// OTHER PARAMETERS

#define DISTANCE_MOVED 20

// *********************************************
// UPDATE WITH YOUR TTN KEYS AND ADDR (ABP METHOD).
static PROGMEM u1_t NWKSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // LoRaWAN NwkSKey, network session key
static u1_t PROGMEM APPSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // LoRaWAN AppSKey, application session key
static const u4_t DEVADDR = 0x00000000; // LoRaWAN end-device address (DevAddr)

// // UPDATE WITH YOUR TTN KEYS (OTAA METHOD).
RTC_DATA_ATTR static u1_t PROGMEM APPEUI[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // lsb, little endian
RTC_DATA_ATTR static u1_t PROGMEM DEVEUI[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // lsb, little endian
RTC_DATA_ATTR static u1_t PROGMEM APPKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // msb, big endian

#endif //LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED

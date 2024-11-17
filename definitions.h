#ifndef OVERRIDE_SYSTEM_DEFINATIONS
#ifndef __IOTAAP_OS_DEFINITIONS_H__
#define __IOTAAP_OS_DEFINITIONS_H__

#define WIFI_AP_INITIAL_NAME "OKOS"

/* GENERAL CONFIG */
#define LIB_VERSION "6.0.1"
#define STATUS_PUBLISH_TIME 1 * 60 * 1000 // How often system status is published in ms
#define OTA_CHECK_TIME 60 * 60 * 1000 // Period in ms for checking for OTA updates
#define CUSTOM_WDT_TIMEOUT 30 // Watchdog timeout in seconds
#define WIFI_CONNECT_TIMEOUT 5  // WiFi timeout in seconds
#undef ARDUINOJSON_USE_LONG_LONG
#define ARDUINOJSON_USE_LONG_LONG 1 // Using int64 variables in JSON
#define DEFAULT_DEVICE_GROUP "mona-v1"

/* QUEUE SIZES */
#define LOGS_QUEUE_SIZE 10
#define LOCAL_DATA_QUEUE_SIZE 20
#define SUBS_TOPIC_QUEUE_SIZE 10
#define UNSUBS_TOPIC_QUEUE_SIZE 10
#define MQTT_MESSAGES_QUEUE_SIZE 50

/* PARAMETER JSON MAX SIZE */
#define PAR_JSON_MAX_LEN    256

/* PINS */
#define BATSENS_PIN 33 // Battery voltage sensor pin
#define BATT_SENSE_VOLTAGE_DIVIDER_RATIO (2.2 + 5.6) / 2.2
#define SD_CS_PIN 5    // SD Card CS pin
#define LED1 2         // Onboard LED1 pin
#define CONFIGURATOR_BUTTON     12 //25
// #define CONFIGURATOR_BUTTON_ACTIVE_LOW
#define CONFIGURATOR_ENTER_MS   3000

// LCD
#define LCD_ENABLED
#define LCD_AUTO_TOGGLE
#define LC_AUTO_SLEEP_SECONDS 120
// #define LCD_DISABLE_TASK 1 
#define LCD_SLEEP_MSG "  MONA"
// #define LCD_NO_BACKLIGHT

// Sensors configurations
// #define SENSORS_ENABLED
// #define ADC_ENABLED
// #define DHT_ENABLED
// Digital pin connected to the DHT sensor
#define DHT_PIN 13
#define DHT_TYPE DHT11
// Meter pins
#define METER_1_PIN 33
#define METER_2_PIN 32
#define METER_3_PIN 35
#define METER_4_PIN 34
#define METER_5_PIN 36
#define METER_6_PIN 39

// Modbus Configuration
// #define MODBUS_ENABLED
#define MAX_MODBUS_SLAVES 3
#define MAX_ADDRESSES_PER_MODBUS_SLAVE 3
#define MODBUS_BAUDRATE 9600
#define MODBUS_RX_PIN 16
#define MODBUS_TX_PIN 17
#define MODBUS_RTS_PIN 14


// GSM
// #define GSM_ENABLED
#define GSM_POLL_TIME_SECONDS 5
#define TINY_GSM_MODEM_SIM800
#define GSM_BAUDRATE 115200

// For Mona V1
#define GSM_RX_PIN 27
#define GSM_TX_PIN 26
#define GSM_RST_PIN 4
// #define GSM_POWER_KEY_PIN 2
// #define GSM_POWER_PIN 2
// Leave empty, if missing user or pass
#define GSM_APN  "airtelgprs.com"
#define GSM_USER ""
#define GSM_PASS ""


// Enable the following line to generate static pass, otherwise a random password is generated each time
// #define CONFIGURATOR_AP_STATIC_PASS "IOT-APP-OS"

/* FS */
// #define SD_MODULE_ACTIVE 
#define SYSTEM_LOG_DIR                "var/log/"    // System logs directory
#define SYSTEM_FILENAME_TEMPLATE      "SYS%05d.log" // Template for system log file name
#define SYSTEM_FULL_FILEPATH_TEMPLATE "var/log/SYS%05d.log" // Template for system log file full path and name
#define MAX_SYSTEM_LOG_FILE_SIZE      50            // File max size (50MB)
#define MAX_SYSTEM_LOGS_SIZE          2048          // Max is 2048 MB (2 GB)
#define MAX_SYSTEM_LOGS_FILE_NUM      (MAX_SYSTEM_LOGS_SIZE/MAX_SYSTEM_LOG_FILE_SIZE)
/* CA certificate path */
#define CA_CRT_DIR          "/"
#define CA_CRT_PATH         CA_CRT_DIR"ca.crt"
/* System configuration file path */
#define CFG_DIR             "/"
#define SYS_CFG_PATH        CFG_DIR"default.cfg"
/* Custom configuration file path */
#define USER_CFG_PATH       CFG_DIR"custom.cfg"
/* System temporary publishing data log path */
#define BACKUP_DATA_DIR      "var/backup/"
#define BACKUP_DATA_TEMPLATE "%04d.log"
#define BACKUP_DATA_PATH     BACKUP_DATA_DIR"%04d.log"
#define BACKUP_FILE_SIZE    (4096*4)

/* OTA */
#define DEFAULT_UPDATE_SERVER "http://iot.okosengineering.com"
#define OTA_CHECK_DEVICE_URI "/api/ota/device/"      // OTA update check endpoint for device
#define OTA_CHECK_GROUP_URI "/api/ota/device_group/"        // OTA update check endpoint for group
#define OTA_CONFIG_CHECK_DEVICE_URI "/api/ota/cfg/device/"      // OTA update check endpoint for device
#define OTA_DOWNLOAD_DEVICE_URI "/api/ota/device/download/" // OTA update download endpoint for device
#define OTA_DOWNLOAD_GROUP_URI "/api/ota/device_group/download/"   // OTA update download endpoint for group

#define TIME_STRING_LENGTH  36

#define DEFAULT_MQTT_USER "dev"
#define MQTT_TIME_TOPIC             "/iotaapsys/services/heartbeat"
#define MQTT_TIME_UPDATE_PERIOD_S   60
#define MQTT_SUBSCRIPTIONS_QOS 1

/* Maximum stack memory used in task */
#if (0)
    #define PRINT_EXTRA_STACK_IN_TASK()                             \
    {                                                               \
        static int minfree = 0xFFFFFF;                              \
        int everminfree = uxTaskGetStackHighWaterMark(NULL);        \
        if (everminfree < minfree)                                  \
        {                                                           \
            minfree = everminfree;                                  \
            Serial.printf("%s = %d\n", __func__, everminfree);      \
        }                                                           \
    } while(0);
#else
#define PRINT_EXTRA_STACK_IN_TASK()
#endif

#endif
#endif
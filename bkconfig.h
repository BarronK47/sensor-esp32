// LWIP Configuration
#ifdef CONFIG_LWIP_LOCAL_HOSTNAME
#undef CONFIG_LWIP_LOCAL_HOSTNAME
#endif
#define CONFIG_LWIP_LOCAL_HOSTNAME	"litterbox-esp32"
// end of LWIP Configuration

//
// Wifi Configuration
//
#ifdef CONFIG_ESP_WIFI_SSID
#undef CONFIG_ESP_WIFI_SSID
#endif
#define CONFIG_ESP_WIFI_SSID		"Ben Browder"

#ifdef CONFIG_ESP_WIFI_PASSWORD
#undef CONFIG_ESP_WIFI_PASSWORD
#endif
#define CONFIG_ESP_WIFI_PASSWORD	"Ineedyoutounderstandthatcrackers.don't.matter!47"

#ifdef CONFIG_ESP_MAXIMUM_RETRY
#undef CONFIG_ESP_MAXIMUM_RETRY
#endif
#define CONFIG_ESP_MAXIMUM_RETRY	5
// end of Wifi Configuration

//
// MQTT Configuration
//
#ifdef CONFIG_MQTT_BROKER_URL
#undef CONFIG_MQTT_BROKER_URL
#endif
#define CONFIG_MQTT_BROKER_URL		"mqtts://mqtt.knigge.dev:8883"

#ifdef CONFIG_MQTT_MAIN_TOPIC
#undef CONFIG_MQTT_MAIN_TOPIC
#endif
#define CONFIG_MQTT_MAIN_TOPIC		"litterbox"
// end of MQTT Configuration

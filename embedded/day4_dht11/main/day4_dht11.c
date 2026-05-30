#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "dht.h"
#include "driver/gpio.h"


#define DHT_PIN GPIO_NUM_32

static const char *TAG = "DHT";


void app_main(void)
{
  float temperature;
  float humidity;
  esp_err_t result;

  while (1) {
    result = dht_read_float_data(DHT_TYPE_AM2301, DHT_PIN, &humidity, &temperature);

    if (result == ESP_OK) {
      ESP_LOGI(TAG, "Humididy: %.1f Temperature: %.1f", humidity, temperature);
    } else {
      ESP_LOGE(TAG, "Failed to read DHT11");
    }
    vTaskDelay(pdMS_TO_TICKS(2000));
  }
}

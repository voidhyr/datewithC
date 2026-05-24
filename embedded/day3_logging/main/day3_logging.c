#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdint.h>

static const char *TAG = "MAIN";

void app_main(void) {
  uint8_t counter = 0;
  while (1) {
    counter += 1;
    ESP_LOGI(TAG, "Counter Value: %d", counter);
    if (counter == 5) {
      ESP_LOGW(TAG, "Counter Value: %d", counter);
    }
    if (counter == 10) {
      ESP_LOGE(TAG, "Counter reached max, resetting: %d", counter);
      counter = 0;
    }
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}

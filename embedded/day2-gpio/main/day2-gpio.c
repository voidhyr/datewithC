#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdio.h>

#define LED_PIN_1 GPIO_NUM_2
#define LED_PIN_2 GPIO_NUM_5

#define LED_PIN_SEL ((1ULL << LED_PIN_1) | (1ULL << LED_PIN_2))

void app_main(void) {
  gpio_config_t io_conf = {
      .pin_bit_mask = LED_PIN_SEL,
      .mode = GPIO_MODE_OUTPUT,
      .pull_up_en = GPIO_PULLUP_DISABLE,
      .pull_down_en = GPIO_PULLDOWN_DISABLE,
      .intr_type = GPIO_INTR_DISABLE,
  };

  gpio_config(&io_conf);

  while (1) {
    gpio_set_level(LED_PIN_1, 1);
    gpio_set_level(LED_PIN_2, 0);
    vTaskDelay(pdMS_TO_TICKS(500));
    printf("LED1: ON LED2: OFF\n");

    gpio_set_level(LED_PIN_2, 1);
    gpio_set_level(LED_PIN_1, 0);
    vTaskDelay(pdMS_TO_TICKS(500));
    printf("LED2: ON LED1: OFF\n");
  }
}

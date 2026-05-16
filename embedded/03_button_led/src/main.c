#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_5
#define BUTTON_PIN GPIO_NUM_4

void app_main(void)
{
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

    gpio_reset_pin(BUTTON_PIN);
    gpio_set_direction(BUTTON_PIN, GPIO_MODE_INPUT);

    gpio_pullup_en(BUTTON_PIN);

    int prev_state = gpio_get_level(BUTTON_PIN);

    while (1)
    {
        int button_state = gpio_get_level(BUTTON_PIN);

        if (button_state != prev_state)
        {
            if (button_state == 0)
            {
                gpio_set_level(LED_PIN, 1);
                printf("BUTTON PRESSED -> LED ON\n");
            }
            else
            {
                gpio_set_level(LED_PIN, 0);
                printf("BUTTON RELEASED -> LED OFF\n");
            }

            prev_state = button_state;
        }

        vTaskDelay(pdMS_TO_TICKS(50));
    }
}

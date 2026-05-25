#include "driver/uart.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdint.h>

#define UART_PORT_NUM UART_NUM_0

static const char *TAG = "UART";

void app_main(void) {
  uart_config_t uart_config = {
      .baud_rate = 115200,
      .data_bits = UART_DATA_8_BITS,
      .parity = UART_PARITY_DISABLE,
      .stop_bits = UART_STOP_BITS_1,
      .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
  };

  uart_param_config(UART_PORT_NUM, &uart_config);

  uart_driver_install(UART_NUM_0, 1024, 0, 0, NULL, 0);

  uint8_t data[128];
  int len;

  while (1) {
    len = uart_read_bytes(UART_NUM_0, data, sizeof(data), pdMS_TO_TICKS(100));
    if (len > 0) {
      ESP_LOGI(TAG, "Received %d bytes", len);
      uart_write_bytes(UART_NUM_0, data, len);
      uart_write_bytes(UART_NUM_0, "\r\n", 2);
    }
  }
}

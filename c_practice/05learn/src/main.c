#include<stdio.h>

typedef enum {
  SENSOR_OK,
  SENSOR_ERROR,
  SENSOR_TIMEOUT,
}  sensor_status_t;


sensor_status_t check_sensor() {
  return SENSOR_TIMEOUT;
};

int main(){
  sensor_status_t status = check_sensor();
  switch (status) {
    case SENSOR_OK:
    printf("Sensor read succesfully\n");
    break;
    case SENSOR_ERROR:
    printf("Sensor read failed\n");
    break;
    case SENSOR_TIMEOUT:
    printf("Sensor timeout\n");
    break;
    default:
    printf("Unknown status\n");
  }
}

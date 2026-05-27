#include <stdio.h>
int avg_temp(int *a, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *(a + i);
  }
  return (double)sum/size;
}
int main() {
  int temps[5] = {28, 29, 27, 30, 28};
  double avg = avg_temp(temps, 5);
  printf("Average: %.2lf\n", avg);
  return 0;
}

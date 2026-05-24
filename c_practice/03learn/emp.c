#include "emp.h"
#include <stdio.h>

void print_emp(emp *e) {
  printf("Age: %d\nExperience: %.1f\nSalary: %d\n", e->age, e->exp, e->salary);
};

void give_raise(emp *e, int amount) { e->salary += amount; };

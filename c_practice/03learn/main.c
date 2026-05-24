#include "emp.h"
#include <stdio.h>

int main() {
  emp e1;
  e1.age = 28;
  e1.exp = 3.8;
  e1.salary = 78000;

  emp *eptr = &e1;
  print_emp(eptr);
  give_raise(eptr, 2000);
  printf("\n");
  print_emp(eptr);
}

#include <stdio.h>

struct emp {
  int age;
  float exp;
  int salary;
};

void print_emp(struct emp *e) {
  printf("Age: %d\nExperience: %.1f\nSalary: %d\n", e->age, e->exp, e->salary);
};

void give_raise(struct emp *e, int amount) { e->salary += amount; };

int main() {
  struct emp e1;
  e1.age = 28;
  e1.exp = 3.8;
  e1.salary = 78000;

  struct emp *eptr = &e1;
  print_emp(eptr);
  give_raise(eptr, 2000);
  printf("\n");
  print_emp(eptr);
}

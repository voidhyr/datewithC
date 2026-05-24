#include <stdio.h>

typedef struct empoylee {
  int age;
  float exp;
  int salary;
} emp;

void print_emp(emp *e) {
  printf("Age: %d\nExperience: %.1f\nSalary: %d\n", e->age, e->exp, e->salary);
};

void give_raise(emp *e, int amount) { e->salary += amount; };

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

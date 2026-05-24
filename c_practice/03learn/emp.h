#ifndef EMP_H
#define EMP_H

typedef struct empoylee {
  int age;
  float exp;
int salary;
} emp;


void print_emp(emp *e);
void give_raise(emp *e, int amount);


#endif

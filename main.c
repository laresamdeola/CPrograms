#include "age.h"
#include "bmi.h"
#include <stdio.h>

int main() {
  /*
  int age = 32;
  int length = 100;
  char names[] = "Lare";
  char address[] = "32, smalldale avenue, manchester";
  float pi = 3.14;
  float height = 6.1;
  float heightByPi = height / pi;
  printf("%.4f", heightByPi);
  return 0;
  */
  // lifeExpectancy();
  // names("Lare", 28);
  /*float result = bmi(98, 184);
  printf("Your bmi is %.2f", result);
  return 0;*/
  int birthYear = age(1975);
  printf("%d", birthYear);
}
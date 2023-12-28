#include <stdio.h>

int lifeExpectancy(){
  int age = 32;
  int lifeExpectancy = 75;
  int howManyYearsLeft = lifeExpectancy - age;
  printf("You have %i years left", howManyYearsLeft);
}
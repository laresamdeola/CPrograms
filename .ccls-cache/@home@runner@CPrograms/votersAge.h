#include <stdio.h>

int votersAge(int year) {
  const int ALLOWED = 21;
  const int CURRENTYEAR = 2024;
  int age = CURRENTYEAR - year;
  if (age >= ALLOWED) {
    return 1;
  } else {
    return 0;
  }
}
#include <stdio.h>

float absnumber(float number) {
  if (number < 0) {
    return number * -1;
  } else {
    return number;
  }
}
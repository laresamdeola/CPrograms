#include <ctype.h>
#include <stdio.h>
#include <string.h>

char colorWheel(char color[]) {
  if (color == "red" || color == "blue" || color == "yellow") {
    printf("Primary");
  } else if (color == "orange" || color == "green" || color == "purple") {
    printf("Secondary");
  } else {
    printf("Tertiary");
  }
}
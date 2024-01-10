#include <ctype.h>
#include <stdio.h>
#include <string.h>

char monthdays(char month[]) {
  if (strcmp(month, "january") == 0 || strcmp(month, "march") == 0 ||
      strcmp(month, "may") == 0 || strcmp(month, "july") == 0 ||
      strcmp(month, "august") == 0 || strcmp(month, "october") == 0 ||
      strcmp(month, "december") == 0) {
    printf("%d", 31);
  } else if (strcmp(month, "february") == 0) {
    printf("%d", 28);
  } else {
    printf("%d", 30);
  }
}

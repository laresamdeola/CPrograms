#include <stdio.h>

/*
BMI = weight(in kilograms) / height (in metres)^2

*/

float bmiCalculator(float weight, float height) {
  float heightMeters = height * 0.01;
  // printf("%f", heightMeters);
  float bmiScore = (float)weight / (heightMeters * heightMeters);
  printf("%f", bmiScore);
  return bmiScore;
  // float bmi = weight / (heightMeters * heightMeters);
  // printf("Your bmi is %.2f", bmi);
}
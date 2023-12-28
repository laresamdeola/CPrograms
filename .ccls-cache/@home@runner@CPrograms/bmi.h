#include <stdio.h>

float bmi(float weight, float height) {
  float heightMeters = height * 0.01;
  float bmiScore = (float)weight / (heightMeters * heightMeters);
  return bmiScore;
}
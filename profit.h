#include <stdio.h>

float profit(float revenue, float cost) {
  float profit = revenue - cost;
  return profit;
}

float revenue(float price, float quantity) {
  float revenue = price * quantity;
  return revenue;
}

float averageRevenue(float revenue, float cost) {
  float averageRevenue = revenue / cost;
  return averageRevenue;
}
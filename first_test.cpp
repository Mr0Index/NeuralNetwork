#include <iostream>
#include <vector>
#include "math.h"
#include "Node.h"
#include "Layer.h"

double mse_error(double* y_true, double* y_pred, int size) {
  double error = 0;
  for (int i = 0; i < size; i++) {
    error += pow((y_true[i] - y_pred[i]), 2); 
  }
  return error / size;
}

double* weight = new double[4] {-2, 25, 17, -15};
double* height = new double[4] {-1, 6, 4, -6};

int main() {
  double* t = new double[4] {1, 0, 0, 1};
  double* p = new double[4] {0, 0, 0, 0};
  std::cout << mse_error(t, p, 4) << std::endl;

  
}
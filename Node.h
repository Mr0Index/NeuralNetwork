#ifndef NODE_H
#define NODE_H

#include "math.h"

class Node {
  public:
    Node(double* weights, double bias, int wSize) {
      this->weights = weights;
      this->wSize = wSize;
      this->bias = bias;
    }

    double feedfoward(double* x) {
      double temp = 0;
      for (int i = 0; i < wSize; i++) {
        temp += (wSize == 1) ? *weights*x[i] : weights[i]*x[i];
      }
      return sigmoid(temp + bias);
    }

  private:
    double* weights;
    int wSize;
    double bias;

    double sigmoid(double val) {
      return 1 / (1 + exp(-val));
    }
};

#endif
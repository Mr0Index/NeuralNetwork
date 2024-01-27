#ifndef NODE_H
#define NODE_H

#include "math.h"

class Node {
  public:
    Node() { }
    Node(double* weights, int w_size, double bias) {
      this->weights = weights;
      this->w_size = w_size;
      this->bias = bias;
    }
    ~Node() {
      delete [] weights;
    }
    /// @brief 
    /// @param x inputs 
    /// @return  
    double feed_forward_sigmoid(double* x) {
      double temp = 0;
      for (int i = 0; i < w_size; i++) {
        temp += (w_size == 1) ? *weights*x[i] : weights[i]*x[i];
      }
      return sigmoid(temp + bias);
    }
    /// @brief 
    /// @param x inputs 
    /// @return  
    double feed_foward_tanh(double* x) {
      double temp = 0;
      for (int i = 0; i < w_size; i++) {
        temp += (w_size == 1) ? *weights*x[i] : weights[i]*x[i];
      }
      return tanh(temp + bias);
    }

  private:
    double* weights;
    int w_size;
    double bias;

    // S-curve Differentiable Activation Functions 
    /*
      Good for calculating probability, outputs are bounded (0, 1)
      Faces vanishing gradient problem
      Not 0 centered
    */
    double sigmoid(double val) {
      return 1 / (1 + exp(-val));
    }
    /*
      0 centered (because of this, tanh nonlinearity is generally preferred over sigmoid nonlinearity)
      Faces vanishing gradient problem
    */
    double tanh(double val) {
      return (exp(val) - exp(-val))/(exp(val) + exp(-val));
    }
};

#endif
#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include "cstdlib"
#include "math.h"
#include "Node.h"

class Layer {
  public:
    Layer(double* layer_weights, int w_size, int layer_size, double* layer_bias) {
      this->layer_weights = layer_weights;
      this->w_size = w_size;
      this->layer_size = layer_size;
      this->layer_bias = layer_bias;

    }
    void update_layer(double* layer_weights, int w_size, int layer_size, double* layer_bias) {
      this->layer_weights = layer_weights;
      this->w_size = w_size;
      this->layer_size = layer_size;
      this->layer_bias = layer_bias;
    }
    double* feed_forward_layer(double* x) {
      double* values = new double[layer_size]; 
      for (int i = 0; i < layer_size; i++) {
        values[i] = nodes[i].feed_forward_sigmoid(x);
      }
      return values;
    }

  private:
    double* layer_weights;
    int w_size;
    int layer_size;
    double* layer_bias;
    Node* nodes;

    void update_nodes() {
      for (int i = 0; i < layer_size; i++) {
        nodes[i] = Node(layer_weights, w_size, layer_bias[i]);  
      }
    }
};

#endif
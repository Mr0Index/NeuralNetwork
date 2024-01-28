#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include "math.h"
#include "Node.h"

class Layer {
  public:
    /// @brief Default contructor
    Layer() { }
    /// @brief Standard constructor
    /// @param layer_weights 
    /// @param w_size 
    /// @param layer_size 
    /// @param layer_bias 
    Layer(double* layer_weights, int w_size, int layer_size, double* layer_bias) {
      this->layer_weights = layer_weights;
      this->w_size = w_size;
      this->layer_size = layer_size;
      this->layer_bias = layer_bias;
      update_nodes();
    }

    /// @brief update the layers paramaters
    /// @param layer_weights 
    /// @param w_size 
    /// @param layer_size 
    /// @param layer_bias 
    void update_layer(double* layer_weights, int w_size, int layer_size, double* layer_bias) {
      this->layer_weights = layer_weights;
      this->w_size = w_size;
      this->layer_size = layer_size;
      this->layer_bias = layer_bias;
      update_nodes();
    }
    /// @brief calculates the activation for each neuron in the layer
    /// @param x input values
    /// @return 
    double* feed_forward_layer(double* x) {
      double* values = new double[layer_size]; 
      for (int i = 0; i < layer_size; i++) {
        values[i] = nodes.at(i).feed_forward_sigmoid(x);
      }
      return values;
    }

  private:
    double* layer_weights;
    int w_size;
    int layer_size;
    double* layer_bias;
    std::vector<Node> nodes;

    void update_nodes() {
      nodes.reserve(layer_size);
      for (int i = 0; i < layer_size; i++) {
        nodes.push_back(Node(layer_weights, w_size, layer_bias[i]));  
      }
    }
};

#endif
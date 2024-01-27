#ifndef NETWORK_H
#define NETWORK_H

#include "math.h"
#include "Layer.h"

class Network {
  public: 
    Network() {

    }

  private: 
    double* uWeights;
    double uBias;
    Layer* layers;
};

#endif
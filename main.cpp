#include <iostream>
#include "math.h"
#include "Node.h"
#include "Layer.h"

using namespace std;

int main() {
  double* w = new double[2] {0, 1};
  double* b = new double[2] {0, 0};
  double* x = new double[2] {2, 3};
  //Node h1(w, 2, 0);
  //Node h2(w, 2, 0);

  Layer hidden(w, 2, 2, b);
  Layer output(w, 2, 1, 0);

  //double* oW = new double[2] {h1.feed_forward_sigmoid(x), h2.feed_forward_sigmoid(x)};
  //Node o1(w, 0, 2);
  //double a = output.feed_forward_layer(hidden.feed_forward_layer(x))[0];
  cout << "Hello" << endl;
}
#include <iostream>
#include "math.h"
#include "Node.h"
#include "Layer.h"
#include "Network.h"

using namespace std;

int main() {
  double* w = new double[2] {0, 1};
  double* x = new double[2] {2, 3};
  Node h1(w, 0, 2);
  Node h2(w, 0, 2);

  Layer hidden();

  double* oW = new double[2] {h1.feedfowardS(x), h2.feedfowardS(x)};
  Node o1(w, 0, 2);
  cout << o1.feedfowardS(oW) << endl;
}
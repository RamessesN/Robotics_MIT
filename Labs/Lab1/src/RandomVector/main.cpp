#include <cstdlib> // required for srand
#include <iostream>
#include "random_vector.h"

using namespace std;

int main(void) { 
  srand(314159);

  RandomVector rv(20);
  rv.print();
  cout << "Mean: " << rv.mean() << endl;
  cout << "Min: " << rv.min() << endl;
  cout << "Max: " << rv.max() << endl;

  cout << "Histogram:" << endl;
  rv.printHistogram(5);
  cout << endl;

  return 0;
}
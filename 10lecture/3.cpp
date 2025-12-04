#include <iostream>
using namespace std;

int factorial(int n) {
  if(n <= 0) return 1;
  return n * factorial(n - 1);
}

// factorial(5) = 1 * 2 * 3 * 4 * 5
// factorial(4) = 1 * 2 * 3 * 4
// factorial(3) = 1 * 2 * 3
// factorial(2) = 1 * 2
// factorial(1) = 1
// factorial(0) = 1

// factorial(5) = factorial(4) * 5

int main() {
  cout << factorial(5);
  return 0;
}
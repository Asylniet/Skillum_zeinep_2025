#include <iostream>

using namespace std;

int fibonacci(int n) {
  if(n == 1) return 1;
  if(n == 2) return 2;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

// 1 2 3 5 8 13 21 34

int main() {
  int n;
  cin >> n;

  cout << fibonacci(n);

  return 0;
}
#include <iostream>

using namespace std;

int binaryToDecimal(int n) {
  if(n == 0) return 0;

  int digit = n % 10;
  int remaining = n / 10;

  return digit + 2 * binaryToDecimal(remaining);
}
// 1100 - 12
// 1011 - 11
// 1010 - 10
// 1001 - 9
// 1000 - 8
// 0111 - 7

int main() {
  int n;
  cin >> n;

  cout << binaryToDecimal(n);
  return 0;
}
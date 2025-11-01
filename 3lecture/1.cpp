#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string s;
  cin >> s;

  // "123"
  // 1 2 3 -> 3 * 1 + 2 * 10 + 1 * 100
  // i = 2, p = 0, s = 2
  // i = 1, p = 1, s = 2
  // i = 0, p = 2, s = 2

  int result = 0;
  for(int i = s.size() - 1; i >= 0; i--) {
    result += (s[i] - '0') * pow(10, s.size() - 1 - i);
  }

  cout << result << " " << result * 2;

  return 0;
}
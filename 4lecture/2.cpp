#include <iostream>
using namespace std;


int stringToInt(string s) {
  int result = 0;
  for(int i = s.size() - 1; i >= 0; i--) {
    result += (s[i] - '0') * pow(10, s.size() - 1 - i);
  }

  return result;
}


int main() {
  cout << stringToInt("123") + 2;
  return 0;
}
#include <iostream>

using namespace std;

int main() {
  string s;
  int step;
  cin >> s >> step;

  for(int i = 0; i < s.size(); i++) {
    int baseIndex = s[i] - int('a');
    int finalIndex = (baseIndex + step) % 26;
    s[i] = int('a') + finalIndex;
  }

  cout << s;

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  string s;

  for(int i = 0; i < s.size(); i++) {
    if(isdigit(s[i])) cout << "#";
    else cout << s[i];
  }

  return 0;
}
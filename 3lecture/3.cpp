#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  // "Hello my name is"
  //  0123456789

  // int spaceIndex = s.find(' ');
  cout << s.substr(3, 3);

  return 0;
}
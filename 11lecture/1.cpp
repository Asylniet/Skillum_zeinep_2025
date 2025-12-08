#include <iostream>

using namespace std;

// 4 + 6
// 4 6 +

// 4 + 6 - 1
// 4 6 + 1 -

// 4 + (6 - 1)
// 4 6 1 - +

// 1 + (2 + 3)
// firstPart = 1
// secondPart = (2 + 3)

// (1 + 2) + 3
// firstPart = 1 + 2
// secondPart = 3

// (2 * 6) + (5 / 9) + 0
// 2 6 * 5 9 / + 0 +

string postfix(string s) {
  string firstPart, secondPart, operation;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ') continue;

    if(s[i] == '(') {
      int closeIndex = s.find(')', i);
      string scope = s.substr(i + 1, closeIndex - i - 1);

      if(operation == "") {
        firstPart = postfix(scope);
      } else {
        secondPart = postfix(scope);
      }

      i = closeIndex + 1;
      continue;
    }

    if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') {
      if(operation != "") {
        firstPart += ' ' + secondPart + ' ' + operation;
        secondPart = "";
      }

      operation = s[i];
      continue;
    }

    if(operation == "") {
      firstPart += s[i];
    } else {
      secondPart += s[i];
    }
  }

  return firstPart + " " + secondPart + " " + operation;
}

int main() {
  string s;
  getline(cin, s);
  
  cout << postfix(s);

  return 0;
}
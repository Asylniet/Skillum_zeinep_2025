#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int convertToInt(string s) {
  map<string, int> nums = { 
    {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4}, {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}, {"ZER", 0}
  };
  
  int result = 0;
  int numOfDigits = s.size() / 3;
  for(int i = 0; i < numOfDigits; i++) {
    string numStr = s.substr(i * 3, 3);
    int digit = nums[numStr];
    result += digit * pow(10, numOfDigits - 1 - i);
  }

  return result;
}

int main() {
  string s = "ONETWOTHR+FOUFIVSIX";
          //  0123456789
  // 1234+567=1801
  // ONEEIGZERONE

  // ONE TWO THR FOU - 1 2 3 4 - 123
  // 012 345 678

  // 0 | 1 * pow(10, 3)
  // 1 | 2 * pow(10, 2)
  // 2 | 3 * pow(10, 1)
  // 3 | 4 * pow(10, 0)

  // power = numOfDigits - 1 - i


  int plusIndex = s.find('+');
  string firstPart = s.substr(0, plusIndex);
  string secondPart = s.substr(plusIndex + 1);

  int sum = convertToInt(firstPart) + convertToInt(secondPart);

  map<int, string> strings = { 
    {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"}, {5, "FIV"}, {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}, {0, "ZER"}
  };

  string result = "";

  while(sum > 0) {
    int digit = sum % 10;
    sum /= 10;

    result = strings[digit] + result;
  }

  cout << result;

  // 579 % 10 = 9
  // 579 / 10 = 57

  // 57 % 10 = 7
  // 57 / 10 = 5

  // 5 % 10 = 5
  // 5 / 10 = 0;

  return 0;
}
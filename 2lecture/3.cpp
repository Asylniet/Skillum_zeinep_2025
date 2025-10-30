#include <iostream>

using namespace std;

int main() {
  int n = 8;

  int row, column;
  cin >> row >> column;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(i == row && j == column) {
        cout << "X ";
      } else if(i == row || j == column) {
        cout << "* ";
      } else {
        cout << "0 ";
      }
    }
    cout << endl;
  }
  return 0;
}
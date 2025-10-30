#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int m = (n * 2) - 1;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(j >= (m / 2) - i && j <= (m / 2) + i) {
        cout << "*";
      } else {
        cout << ".";
      }
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}
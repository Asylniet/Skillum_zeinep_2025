#include <iostream>
#include <string>
using namespace std;

int main() {
  // string s = "12345";

  // for(int i = 0; i < 5; i++) {
  //   cout << s[i] << endl;
  // }

  // ----------

  // 1. i = 0, 0 < 5, i++
  // 2. i = 1, 1 < 5, i++
  // 3. i = 2, 2 < 5, i++
  // 4. i = 3, 3 < 5, i++
  // 5. i = 4, 4 < 5, i++
  // 6. i = 5, 5 < 5 -> x

  // for (int i = 10; i > 0; i = i - 2) {
  //   cout << i << endl;
  // }

  int n;
  cin >> n;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << 1 << " ";
      sum++;
    }
    cout << endl;
  }

  cout << sum;

  return 0;
}
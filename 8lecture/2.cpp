#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  int x;
  while(cin >> x) {
    v.push_back(x);

    if(cin.peek() == '/n') break;
  }

  sort(v.begin(), v.end());

  vector<int> even;
  vector<int> odd;

  for(int i = 0; i < v.size(); i++) {
    if(v[i] % 2 == 0) {
      even.push_back(v[i]);
    } else {
      odd.push_back(v[i]);
    }
  }

  for(int i = 0; i < even.size(); i++) {
    cout << even[i] << " ";
  }

  cout << endl;

  for(int i = 0; i < odd.size(); i++) {
    cout << odd[i] << " ";
  }

  // 1 3 2 5 8 9 3 6 7 9

  // 1 3 3 5 7 9
  // 2 6 8

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  int n, min, max;
  while(cin >> n) {
    if(v.size() == 0) {
      min = n;
      max = n;
    }

    if(n > max) {
      max = n;
    }

    if(n < min) {
      min = n;
    }

    v.push_back(n);
    if(cin.peek() == '\n') break;
  }

  for(int i = 0; i < v.size(); i++) {
    if(v[i] == min) {
      cout << max << " ";
    } else {
      cout << v[i] << " ";
    }
  }
  return 0;
}
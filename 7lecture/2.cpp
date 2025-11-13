#include <iostream>
#include <vector>

using namespace std;

int sortingFn(int a, int b) {
  return a < b;
}

int main() {
  vector<int> v;
  for(int i = 1; i <= 10; i++) {
    v.push_back(i);
    v.push_back(i / 2);
  }

  sort(v.begin(), v.end(), sortingFn);
  // reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}
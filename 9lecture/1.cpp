#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sortingFunc(pair<int, int> a, pair<int, int> b) {
  return a.first - a.second < b.first - b.second;
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int> > v;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end(), sortingFunc);
  // reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
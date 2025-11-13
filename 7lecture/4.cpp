#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  map<int, int> mp;

  for(int i = 10; i >= 1; i--) {
    if(mp[i] == 0) {
      mp[i] = 1;
      v.push_back(i);
    }

    if(mp[i * 2] == 0) {
      mp[i * 2] = 1;
      v.push_back(i * 2);
    }
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
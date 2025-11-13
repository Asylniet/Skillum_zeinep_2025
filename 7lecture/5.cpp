#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> mp;
  vector<int> v;

  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mp[x] += 1;
    v.push_back(x);
  }

  int max = v[0];
  for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    if(it->second > mp[max]) {
      max = it->first;
    }
  }

  cout << max;

  return 0;
}
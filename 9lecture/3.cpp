#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, string> mp;
  for(int i = 0; i < n; i++) {
    string name, password;
    cin >> name >> password;
    mp[name] = password;
  }

  cin >> n;
  for(int i = 0; i < n; i++) {
    string name, password;
    cin >> name >> password;

    // login is not found
    if(mp.find(name) == mp.end()) {
      cout << "login error\n";
      continue;
    }

    if(mp[name] == password) {
      cout << "correct password\n";
    } else {
      cout << "password error\n";
    }
  }

  return 0;
}
// 3 2 4 7 11
// 10

// 3 2 4 7 11 | 1 5 6 8 9 10 12 13 14 15 16 17 18

#include <iostream>
#include <map>
using namespace std;

int main() {
  // ------ PSEUDO CODE ------ 
  // vector<int> v;

  // while(true) {
  //   cin >> v.push_back();
  //   if(new_line) {
  //     break;
  //   } 
  // }

  // int position;
  // cin >> position;

  // int cnt = 0;

  // for(int i = 1; i <= 1000; i++) {
  //   if(v.find(i)) {
  //     continue
  //   } else {
  //     cnt++;
  //   }

  //   if(cnt == position) {
  //     cout << i;
  //     break;
  //   }
  // }
  // ------ PSEUDO CODE END ------ 

  map<int, int> mp;

  int x;
  while(cin >> x) {
    mp[x] = 1;
    if(cin.peek() == '\n') break;
  }

  int position;
  cin >> position;

  int cnt = 0;
  int result = -1;

  for(int i = 1; i <= 1000; i++) {
    if(mp[i] == 0) {
      cnt++;
    } 

    if(cnt == position) {
      result = i;
      break;
    }
  }

  cout << result;

  return 0;
}
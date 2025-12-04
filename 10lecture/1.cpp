#include <iostream>
#include <stack>

using namespace std;

int main() {
  string s;
  cin >> s;
  stack<char> st;

  for(int i = s.size() - 1; i >= 0; i--) {
    char digit = s[i];

    if(digit == '1' && !st.empty() && st.top() == '1') {
      st.pop();
    } else {
      st.push(digit);
    }
  }

  while(!st.empty()) {
    cout << st.top();
    st.pop();
  }
 
  return 0;
}
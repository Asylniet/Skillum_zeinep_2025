#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> st;

  for(int i = 10; i >= 1; i--) {
    st.insert(i);
    st.insert(i * 2);
  }

  for(set<int>::iterator it = st.begin(); it != st.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}
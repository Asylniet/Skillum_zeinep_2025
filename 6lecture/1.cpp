#include <iostream>

using namespace std;

// 4
// Ponabity bonabety
// 01234567 01234567
// barbie barpee
// abcabc apcap
// abc apcd

int main(){ 
  // «b» = «p», а также «i» и «e», поэтому «b» для них то же самое, что «p», а «i» для них то же самое, что «e»
  int n;
  cin >> n;

  string results[n];

  for(int i = 0; i < n; i++) {
    string s1, s2;
    cin >> s1 >> s2;

    bool isSimilar = true;

    if(s1.size() != s2.size()) {
      results[i] = "NO";
    } else {
      for(int j = 0; j < s1.size(); j++) {
        char firstLetter = tolower(s1[j]);
        char secondLetter = tolower(s2[j]);

        if(firstLetter == secondLetter) continue;

        if((firstLetter == 'b' && secondLetter == 'p') || (firstLetter == 'p' && secondLetter == 'b')) continue;

        if((firstLetter == 'i' && secondLetter == 'e') || (firstLetter == 'e' && secondLetter == 'i')) continue;

        isSimilar = false;
        break;
      }
      results[i] = isSimilar ? "Yes" : "NO";
    }
  }

  for(int i = 0; i < n; i++) {
    cout << results[i] << endl;
  }

  return 0;
}
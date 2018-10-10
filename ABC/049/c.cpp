#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string strs[4] = {"dream", "dreamer", "eraser", "erase"};

int main() {
  string str;
  cin >> str;

  reverse(str.begin(), str.end());
  for (int i = 0; i < 4; i++) {
    reverse(strs[i].begin(), strs[i].end());
  }

  bool can = true;
  int tmp;
  for (int i = 0; i < str.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++) {
      string d = strs[j];
      if (str.substr(i, d.size()) == d) {
        can2 = true;
        i += d.size();
      }
    }
    if (can2 == false) {
      can = false;
      break;
    }
  }

  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

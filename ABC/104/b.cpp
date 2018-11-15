#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  string s;
  cin >> s;

  int count = 0;
  for (int i = 2; i < s.size() - 1; ++i) {
    if (s.at(i) == 'C') {
      ++count;
      s.erase(s.begin() + i);
    }
  }
  if (s.at(0) != 'A' || count != 1) {
    cout << "WA" << endl;
    return 0;
  }
  s.erase(s.begin() + 0);
  for (int i = 0; i != s.size(); ++i) {
    if (islower(s[i]) == 0) {
      cout << "WA" << endl;
      return 0;
    }
  }

  cout << "AC" << endl;
  return 0;
}

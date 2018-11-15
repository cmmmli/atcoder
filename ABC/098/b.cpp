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
  int n;
  string str, s;
  cin >> n >> str;

  int maxval = -1;
  int count = 0;
  vector<char> v;
  for (int i = 0; i != s.size() - 1; ++i) {
    s = str;
    v.clear();
    count = 0;
    for (int j = 0; j < i + 1; ++j) {
      auto result = find(v.begin(), v.end(), s[j]);
      if (result == v.end()) {
        v.push_back(s[j]);
        for (int k = i + 1; k != s.size(); ++k) {
          if (s[j] == s[k]) {
            ++count;
            break;
          }
        }
      }
    }
    maxval = max(maxval, count);
  }

  cout << maxval << endl;
  return 0;
}

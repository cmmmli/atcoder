#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  string s, t;
  cin >> s >> t;

  for (int i = 0; i != s.size(); ++i) {
    if (s[i] == t[i]) continue;

    char c1 = s[i], c2 = t[i];

    for (int j = 0; j != s.size(); ++j) {
      if (s[j] == c1) {
        if (j < i) {
          cout << "No" << endl;
          return 0;
        }
        s[j] = c2;
      } else if (s[j] == c2) {
        if (j < i) {
          cout << "No" << endl;
          return 0;
        }
        s[j] = c1;
      }
    }
  }

  if (s == t) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int m[1010];

int main() {
  int n, m;
  cin >> n;
  vector<string> blue(n);
  for (int i = 0; i < n; ++i) {
    cin >> blue[i];
  }
  cin >> m;
  vector<string> red(m);
  for (int i = 0; i < m; ++i) {
    cin >> red[i];
  }

  int res = 0;
  auto calc = [&](string s) {
    int buf = 0;
    for (string t: blue) {
      if (t == s) ++buf;
    }
    for (string t: red) {
      if (t == s) --buf;
    }
    return buf;
  };

  for (string t: blue) {
    res = max(res, calc(t));
  }
  cout << res << endl;
  return 0;
}

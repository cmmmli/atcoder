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

int m[1010];

int gcd(int a, int b) {
  if (a == 0) return b;
  return gcd(b % a, a);
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> xx(n);
  int res, tmp;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    xx[i] = abs(x - tmp);
  }

  res = xx[0];
  for (int i = 1; i < n; ++i) {
    res = gcd(res, xx[i]);
  }
  cout << res << endl;
  return 0;
}

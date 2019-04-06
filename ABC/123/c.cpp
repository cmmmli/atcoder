#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  ll n; cin >> n;
  ll a, b, c, d, e; cin >> a >> b >> c >> d >> e;
  ll minval = INF;
  minval = min(a, min(b, min(c, min(d, e))));
  ll res = 0;
  if (minval < n) {
    res = ceil((double)n / minval) + 4;
  } else {
    res = 5;
  }
  cout << res << endl;
  return 0;
}

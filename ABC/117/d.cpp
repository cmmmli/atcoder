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
  int n;
  ll k;
  vector<ll> a(n);
  cin >> n >> k;
  for (int i = 0; i < n; ++i) cin >> a[i];

  ll sum, res = -1;
  for (int x = 0; x <= k; ++x) {
    sum = 0;
    for (int i = 0; i != a.size(); ++i) {
      sum += x ^ a[i];
    }
    res = max(res, sum);
  }

  cout << res << endl;
  return 0;
}

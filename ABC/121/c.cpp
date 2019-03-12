#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <ctype.h>
#include <numeric>
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
  int n, m; cin >> n >> m;
  vector<Pll> p(n);
  int a, b;
  ll ans = 0, cnt = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    p[i] = make_pair(a, b);
  }
  sort(p.begin(), p.end());

  for (int i = 0; i < n; ++i) {
    if (cnt + p[i].second >= m) {
      ans += p[i].first * (m - cnt);
      break;
    } else {
      ans += p[i].first * p[i].second;
      cnt += p[i].second;
    }
  }

  cout << ans << endl;
  return 0;
}

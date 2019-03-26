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
  int n, q; cin >> n >> q;
  string str; cin >> str;
  vector<int> l(n), r(n);
  for (int i = 0; i < q; ++i) cin >> l[i] >> r[i];

  vector<int> points(n + 1, 0);
  for (int i = 0; i < n - 1; ++i) {
    points[i + 1] = points[i];
    if (str[i] == 'A' && str[i + 1] == 'C') ++points[i + 1];
  }

  vector<int> ans;
  for (int i = 0; i < q; ++i) {
    int ans = points[r[i] - 1] - points[l[i] - 1];
    cout << ans << endl;
  }
  return 0;
}

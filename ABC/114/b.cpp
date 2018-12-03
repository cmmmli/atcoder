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

ll n, ans = 0;

void dfs(ll x, bool a, bool b, bool c) {
  if (x > n) return;

  if (a && b && c) ++ans;
  dfs(x * 10 + 7, true, b, c);
  dfs(x * 10 + 5, a, true, c);
  dfs(x * 10 + 3, a, b, true);
}

int main() {
  cin >> n;

  dfs(0, false, false, false);
  cout << ans << endl;
  return 0;
}

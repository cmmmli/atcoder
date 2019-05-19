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
  int n; cin >> n;
  int v[n], u[n], w[n];
  int res[n];
  for (int i = 0; i < n; ++i) res[i] = 0;

  for (int i = 0; i < n - 1; ++i) {
    cin >> v[i] >> u[i] >> w[i];
    if (w[i] % 2 != 0) res[u[i] - 1] = 1;
  }

  for (int i = 0; i < n; ++i) {
    cout << res[i] << endl;
  }
  return 0;
}

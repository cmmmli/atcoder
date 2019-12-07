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
  int ans = 0;
  vector<int> d(n);
  for (int i = 0; i < n; i++) cin >> d[i];
  sort(d.begin(), d.end());

  int mid = (n / 2) - 1;
  if (d[mid] != d[mid + 1]) {
    ans = d[mid + 1] - d[mid];
  }

  cout << ans << endl;
  return 0;
}

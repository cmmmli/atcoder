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
  cin >> n;
  ll a[200000];
  vector<int> b(n);
  for (int i = 0; i < n; ++i) scanf("%lld", &a[i]);
  for (int i = 0; i < n; ++i) a[i] -= i + 1;

  std::sort(a, a + n);

  int middle;
  if (n % 2 == 0) middle = n / 2;
  else middle = (n - 1) / 2;

  ll ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += abs(a[i] - a[middle]);
  }

  cout << ans << endl;
  return 0;
}

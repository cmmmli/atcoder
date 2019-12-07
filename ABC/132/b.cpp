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
  vector<int> num;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    num.push_back(x);
    if (i < 2) continue;

    if (num[i - 2] <= num[i - 1] && num[i - 1] < num[i]) ans++;
    else if (num[i - 2] > num[i - 1] && num[i - 1] >= num[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}

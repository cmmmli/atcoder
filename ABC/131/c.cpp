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
  ll a, b, c, d; cin >> a >> b >> c >> d;
  ll ans = 0;
  ll num1, num2;
  num1 = b - ((b / c + b / d) - b / (c * d / __gcd(c, d)));
  a--;
  num2 = a - ((a / c + a / d) - a / (c * d / __gcd(c, d)));
  ans = num1 - num2;
  cout << ans << endl;
  return 0;
}

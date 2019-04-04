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
  int a, b, c, d; cin >> a >> b >> c >> d;
  double takahashi = (double)b / a;
  double aoki = (double)d / c;
  if (takahashi > aoki) cout << "TAKAHASHI" << endl;
  else if (takahashi < aoki) cout << "AOKI" << endl;
  else cout << "DRAW" << endl;
  return 0;
}

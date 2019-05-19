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
  string s; cin >> s;

  int a = (s[0] - '0') * 10 + s[1] - '0';
  int b = (s[2] - '0') * 10 + s[3] - '0';

  if (a == 0 || a > 12) {
    if (b == 0 || b > 12) cout << "NA" << endl;
    else if (0 < b && b <= 12) cout << "YYMM" << endl;
  } else if (0 < a && a <= 12) {
    if (b == 0 || b > 12) cout << "MMYY" << endl;
    else if (0 < b && b <= 12) cout << "AMBIGUOUS" << endl;
  }

  return 0;
}

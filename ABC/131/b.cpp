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
  int n, l; cin >> n >> l;
  int minl = l;
  int maxl = l + n - 1;

  int eat = 0;
  if (maxl <= 0) eat = maxl;
  else if (minl >= 0) eat = minl;

  cout << (minl + maxl) * (maxl - minl + 1) / 2 - eat << endl;
  return 0;
}

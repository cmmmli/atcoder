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
const ll MOD = 1e9 + 7;
const int INF = 1e9;

int dx4[4] = { 0, -1, 1, 0 };
int dy4[4] = { -1, 0, 0, 1 };
int dx8[8] = { 0, -1, 1, 0, -1, 1, -1, 1 };
int dy8[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };

int main() {
  int n; cin >> n;
  vector<int> jpy;
  vector<double> btc;
  double tmp;
  string type;
  for (int i = 0; i < n; ++i) {
    cin >> tmp >> type;
    if (type == "BTC") {
      btc.push_back(tmp);
    } else {
      jpy.push_back(int(tmp));
    }
  }
  int jpysum = accumulate(jpy.begin(), jpy.end(), 0);
  double btcsum = accumulate(btc.begin(), btc.end(), 0.0);
  btcsum *= 380000.0;
  cout << jpysum + btcsum << endl;;
  return 0;
}

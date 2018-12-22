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
  ll n, p;
  cin >> n >> p;
  int ans;
  int min = pow(p, 1.0/n);
  for (ll i = min; ; ++i) {
    cout << min << ", ";
    if (pow(i, n) > p) continue;
    min = i;
    if (pow(i, n) <= p) break;
  }
  if (pow(min, n) == p) {
    cout << min << endl;
    return 0;
  }
  cout << endl;

  cout << min << endl;

  // ll nums[n];
  // vector<ll> nums;
  // for (int i = 0; i < n; ++i) {
  //   nums.push_back(min);
  // }

  // for (int i = 0; i < n; ++i) {
  //   for (int j = min; ; ++j) {
  //     ++nums[i];
  //     ll acm = accumulate(nums.begin(), nums.end(), 1, [](int init, int i) {
  //       return init * i;
  //     });
  //     if (acm == p) {
  //       // cout << gcd()
  //     }
  //     if (acm > p) break;
  //   }
  // }
  return 0;
}

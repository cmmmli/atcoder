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
  int s;
  cin >> s;
  vector<int> nums;
  for (int i = 0; i <= 1000000; ++i) {
    if (s % 2 == 0) {
      s /= 2;
    } else {
      s = 3 * s + 1;
    }

    auto res = find(nums.begin(), nums.end(), s);
    nums.push_back(s);
    if (res != nums.end() && nums.size() > 2) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}

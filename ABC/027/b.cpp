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
  int tmp, ans = 0;
  int sum = 0, population;
  vector<int> arr;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    arr.push_back(tmp);
    sum += tmp;
  }

  if (sum % n != 0) {
    ans = -1;
  } else {
    tmp = 0;
    population = sum / n;
    for (int i = 1; i < n; ++i) {
      tmp += arr[i - 1];
      if (tmp != population * i) ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}

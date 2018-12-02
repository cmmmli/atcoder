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


bool count75(int num) {
  int count = 0;
  for (int i = 1; i <= num; ++i) {
    if (num % i == 0) {
      ++count;
      if (count > 75) return false;
    }
  }
  if (count == 75) return true;
  else return false;
}

int countYaku(int num) {
  int count = 0;
  for (int i = 1; i <= num; ++i) {
    if (num % i == 0) {
      if (count75(i)) {
        ++count;
      }
    }
  }
  return count;
}

ll hogehoge(int num) {
  ll res = 1;
  for (int i = 1; i <= num; ++i) {
    res *= i;
  }
  return res;
}

int main() {
  int n;
  cin >> n;

  ll num = hogehoge(n);
  int res = countYaku(num);
  cout << res << endl;
  return 0;
}

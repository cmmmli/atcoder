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

bool checkDigit(int num) {
  int hoge[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int tmp = num % 10;
  while (num > 0) {
    if (tmp != 3 && tmp != 5 && tmp != 7) {
      return false;
    }
    hoge[tmp]++;
    num /= 10;
    tmp = num % 10;
  }
  if (hoge[3] && hoge[5] && hoge[7]) return true;
  else return false;
}

int main() {
  int n;
  cin >> n;

  int res = 0;
  for (int i = 357; i <= n; i += 2) {
    if (checkDigit(i)) ++res;
  }
  cout << res << endl;
  return 0;
}

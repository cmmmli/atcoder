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

int GetDigit(int num){
    int digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

int main() {
  vector<int> num(5);
  for (int i = 0; i < 5; i++) cin >> num[i];
  int res = 0;
  int minus = -1;
  for (int i = 0; i < 5; i++) {
    if (num[i] % 10 != 0) {
      int tmp = ((num[i] / 10) + 1) * 10;
      minus = max(tmp - num[i], minus);
      res += tmp;
    } else {
      res += num[i];
    }
  }

  if (minus > 0) res -= minus;
  cout << res << endl;
  return 0;
}

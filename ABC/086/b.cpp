#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <set>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int m[1010];

int main() {
  int a, b;
  cin >> a >> b;

  auto getDigit = [](int num) {
    int res = 0;
    while (num != 0) {
      num /= 10;
      ++res;
    }
    return res;
  };

  int num = a * pow(10, getDigit(b)) + b;

  if (sqrt(num) - (int)sqrt(num) == 0.0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

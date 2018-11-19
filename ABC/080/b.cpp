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

int digitSum(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  int fx = digitSum(n);

  if (n % fx == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

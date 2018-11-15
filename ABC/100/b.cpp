#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  int d, n;
  cin >> d >> n;
  int res = n * pow(100, d);
  if (n == 100) res += pow(100, d);
  cout << res << endl;
  return 0;
}

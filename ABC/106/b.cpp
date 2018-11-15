#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  int n;
  cin >> n;

  int count, res = 0;
  for (int i = 1; i <= n; i += 2) {
    count = 1;
    for (int j = 1; j <= i / 2; j += 2) {
      if (i % j == 0) ++count;
    }
    if (count == 8) ++res;
  }

  cout << res << endl;
  return 0;
}

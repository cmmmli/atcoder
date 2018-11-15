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
  int n;
  cin >> n;
  int maxval = 0;
  int minval = 1e9 + 1;
  int tmp;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    maxval = max(maxval, tmp);
    minval = min(minval, tmp);
  }

  cout << maxval - minval << endl;
  return 0;
}

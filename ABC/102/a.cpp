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
  int N;
  cin >> N;

  int res = 0;
  for (int i = N; ; i += N) {
    if (i % 2 == 0) {
      res = i;
      break;
    }
  }
  cout << res << endl;

  return 0;
}

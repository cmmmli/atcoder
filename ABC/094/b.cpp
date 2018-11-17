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

int m[1010];

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  int tmp;
  vector<int> left;
  vector<int> right;
  for (int i = 0; i < m; ++i) {
    cin >> tmp;
    if (tmp < x) left.push_back(tmp);
    else right.push_back(tmp);
  }
  cout << min(left.size(), right.size()) << endl;
  return 0;
}

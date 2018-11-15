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
  vector<int> a(3);
  cin >> a.at(0) >> a.at(1) >> a.at(2);
  sort(a.begin(), a.end());
  int res = (a[1] - a[0]) + (a[2] - a[1]);
  cout << res << endl;

  return 0;
}

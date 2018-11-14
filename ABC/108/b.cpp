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
  vector<int> x(4), y(4);
  for (int i = 0; i < 2; ++i) {
    cin >> x[i] >> y[i];
  }

  int l1, l2;
  l1 = x[1] - x[0];
  l2 = y[1] - y[0];

  x[2] = x[1] - l2;
  y[2] = y[1] + l1;

  x[3] = x[2] - l1;
  y[3] = y[2] - l2;

  cout << x[2] << " ";
  cout << y[2] << " ";
  cout << x[3] << " ";
  cout << y[3] << " ";
  cout << endl;

  return 0;
}

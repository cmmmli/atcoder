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
  int r;
  cin >> r;
  if (r < 1200) cout << "ABC" << endl;
  else if (r < 2800) cout << "ARC" << endl;
  else cout << "AGC" << endl;
  return 0;
}

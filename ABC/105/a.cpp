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
  int n, k;
  cin >> n >> k;
  if (n % k == 0) cout << "0" << endl;
  else cout << "1" << endl;
  return 0;
}

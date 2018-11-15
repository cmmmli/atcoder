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

  if (n < 1000) cout << "ABC" << endl;
  else cout << "ABD" << endl;

  return 0;
}

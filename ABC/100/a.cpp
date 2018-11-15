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
  int a, b;
  cin >> a >> b;

  if (a <= 8 && b <= 8) cout << "Yay!" << endl;
  else cout << ":(" << endl;

  return 0;
}

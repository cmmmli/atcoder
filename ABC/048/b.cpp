#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  ll aa = a + (x - (a % x));
  ll bb = b + (x - (b % x));
  ll res = (bb - aa) / x + (a % x == 0 ? 1 : 0);

  cout << res << endl;
  return 0;
}

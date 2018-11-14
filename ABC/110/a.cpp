#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;


int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int max_value = max(A, max(B, C));
  int sum = A + B + C;

  int res = max_value * 10 + (sum - max_value);

  cout << res << endl;
  return 0;
}

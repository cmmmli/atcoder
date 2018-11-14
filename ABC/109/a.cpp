#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;


int main() {
  int A, B;
  cin >> A >> B;

  int res = 0;
  for (int i = 1; i <= 3; ++i) {
    res = A * B * i;
    if (res % 2 != 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}

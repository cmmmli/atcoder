#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int res;
  res = min(B, D) - max(A, C);
  if (res < 0) res = 0;
  cout << res << endl;
  return 0;
}

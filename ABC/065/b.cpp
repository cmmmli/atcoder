#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;


int main() {
  int N;
  cin >> N;
  vector<int> buttons(N + 1);
  buttons[0] = 0;
  for (int i = 1; i <= N; ++i) {
    cin >> buttons[i];
  }

  int count = 0, i = 1;
  for (;;) {
    if (i == 2) break;
    if (count > N) {
      count = -1;
      break;
    }
    ++count;
    i = buttons[i];
  }

  cout << count << endl;
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <ctype.h>
using namespace std;

typedef long long ll;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

int main() {
  string str, s;
  for (int i = 0; i < 3; ++i) {
    cin >> str;
    s.push_back(str[i]);
  }
  cout << s << endl;
  return 0;
}

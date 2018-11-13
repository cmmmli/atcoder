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
  string str;
  cin >> str;

  int count1 = 0;
  int count2 = 0;
  int res;

  for (int i = 0; i != str.size(); ++i) {
    if (str.at(i) == 'E') ++count2;
  }

  res = count2;
  int tmp;
  for (int i = 0; i != str.size(); ++i) {
    if (str.at(i) == 'E') --count2;
    tmp = (i - count1) + count2;
    res = min(res, tmp);
    if (str.at(i) == 'E') ++count1;
  }

  cout << res << endl;
  return 0;
}

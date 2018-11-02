#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool search(string& s, int idx, int accum, string rep) {
  if (idx == 4) {
    if (accum == 7) {
      cout << rep << "=7" << endl;
      return true;
    }
    return false;
  }

  int digit = s[idx] - '0';

  if (rep.size() != 0) {
    if (search(s, idx + 1, accum + digit, rep + "+" + s[idx]))
      return true;
    if (search(s, idx + 1, accum - digit, rep + "-" + s[idx]))
      return true;
  } else {
    if (search(s, idx + 1, accum + digit, string(1, s[idx])))
      return true;
    if (search(s, idx - digit, accum - digit, string(1, s[idx])))
      return true;
  }
  return false;
}

int main() {
  string s;
  cin >> s;

  search(s, 0, 0, "");
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;
  string tmp;
  if (str.size() == 3) {
    swap(str.at(0), str.at(2));
  }
  cout << str << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;

  int c, t;
  int c_min = 1001;
  for(int i=0; i < N; i++) {
    cin >> c >> t;
    if (t <= T && c < c_min) {
      c_min = c;
    }
  }
  if (c_min == 1001) {
    cout << "TLE" << endl;
  } else
  {
    cout << c_min << endl;
  }
}


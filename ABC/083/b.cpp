#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int result = 0;

  for (int i = 1; i <= N; i++) {
    int num = i;
    int dig;
    int sum = 0;
    while(num) {
      dig = num % 10;
      sum += dig;
      num = num / 10;
    }
    if(sum >= A && sum <= B) {
      result += i;
    }
  }

  cout << result << endl;
  return 0;
}

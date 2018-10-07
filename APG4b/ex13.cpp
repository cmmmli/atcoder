#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, average;
  int sum = 0;
  cin >> N;
  vector<int> scores(N);

  for(int i = 0; i < N; i++)
  {
    cin >> scores.at(i);
    sum += scores.at(i);
  }

  average = sum / N;
  cout << "average: " << average << endl;
  for(int i = 0; i < N; i++)
  {
    cout << abs(scores.at(i) - average) << endl;
  }
}

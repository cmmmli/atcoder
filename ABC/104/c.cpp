#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int d, g, ans = 1e8;
	cin >> d >> g;
	vector<int> p(d), c(d);
	for(int i = 0; i < d; i++) cin >> p[i] >> c[i];

	for (int i = 0; i < (1 << d); i++) {
    // cout << "i: " << i << endl << endl;
		int t = 0, q = -1, x = 0;
		for (int j = 0; j < d; j++) {
			if (i & (1 << j)) {
				t += (j + 1) * 100 * p[j] + c[j];
				x += p[j];
			} else {
				q = j;
			}
      // cout << "j: " << j << endl;
      // cout << "t: " << t << ", x: " << x << ", q: " << q << endl << endl;
		}
		if (t < g) {
			int po = (q + 1) * 100;
			if (g - t <= po * (p[q] - 1)) {
				x += (g - t + po - 1) / po;
			} else {
        // cout << "continue" << endl << endl;
				continue;
			}
		}
    // cout << "ans: " << ans << ", x: " << x << endl;;
    // cout << endl;
		ans = min(ans, x);
	}
	cout << ans << endl;
	return 0;
}

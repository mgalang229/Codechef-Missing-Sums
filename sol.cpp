#include <bits/stdc++.h>

using namespace std;

const int INF = (int) 1e5;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> vec;
	for (int i = 1; i <= INF; i += 2) {
		vec.push_back(i);
	}
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// print the sequence of odd numbers of length n
		for (int i = 0; i < n; i++) {
			cout << vec[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}

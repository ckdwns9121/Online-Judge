#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t, N, M;
	cin >> t;
	while (t--) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		cin >> M;
		for (int i = 0; i < M; i++) {
			int temp;
			cin >> temp;
			if (binary_search(v.begin(), v.end(), temp)) 
				cout << "1\n";
			else 
				cout << "0\n";
		}
		v.clear();
	}

	return 0;
}
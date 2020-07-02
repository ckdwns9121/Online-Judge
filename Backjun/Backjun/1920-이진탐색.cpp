#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	int arr[100000] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int t;
	cin >> t;
	int k;
	for (int i = 0; i < t; i++) {
		cin >> k;
		if (!binary_search(arr, arr + n, k)) cout << "0\n";
		else cout << "1\n";
	}

	return 0;
}
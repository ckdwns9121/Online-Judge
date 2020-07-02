#include <iostream>
#include <algorithm>
using namespace std;

int arr[501][501];

int dp(int n) {

	int temp = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0) arr[i][j] += arr[i - 1][0];
			else if (j == i)  arr[i][j] += arr[i - 1][j - 1];
			else arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
		}
	}

	for (int i = 0; i < n; i++)
		if (arr[n - 1][i] > temp)  temp = arr[n - 1][i];
	
	return temp;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		for (int j = 0; j < i+1; j++) {
			cin>>arr[i][j];
		}
	}
	cout << dp(testcase);

	return 0;
}
#include <iostream>
using namespace std;
int arr[1001];

int dp(int x) {
	
	if (x == 1) return 1;
	if (x == 2) return 3;
	if (arr[x] != 0) return arr[x];
	return arr[x] = ((dp(x - 1) + dp(x - 2)*2)) % 10007;

}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 속도 향상 위해
	int x;
	cin >> x;
	cout << dp(x);
	return 0;

}
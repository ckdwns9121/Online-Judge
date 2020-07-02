
#include <iostream>
using namespace std;

int dp[11];
int fn(int temp) {
	if (temp == 1) return 1;
	if (temp == 2) return 2;
	if (temp == 3) return 4;
	if (dp[temp] != 0) return dp[temp];
	return dp[temp] = fn(temp - 1) + fn(temp - 2) + fn(temp - 3);

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 속도 향상 위해
	int n;
	cin >> n;
	while (n--) {
		int temp;
		cin >> temp;
		cout << fn(temp)<<endl;

	}
	return 0;
}
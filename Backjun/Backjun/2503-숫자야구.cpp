#include <stdio.h>
#include <string.h> 
#pragma warning(disable:4996)

int count = 0;
int dp_Array[1001];
int LIS;
int st;
int ball;

int dp(int j, int arr, int strike, int ball) {
	int strCount = 0, ballCount = 0;
	int x1 = arr / 100, x2 = (arr / 10) % 10, x3 = (arr % 10);
	int j1 = j / 100, j2 = (j / 10) % 10, j3 = (j % 10);
	if (x1 == x2 || x1 == x3 || x2 == x3 || x1 == 0 || x2 == 0 || x3 == 0) return 1;
	if (j1 == j2 || j1 == j3 || j2 == j3 || j1 == 0 || j2 == 0 || j3 == 0) return 1;

	if (x1 == j1) strCount++;
	if (x2 == j2) strCount++;
	if (x3 == j3) strCount++;

	if (x1 == j2 || x1 == j3) ballCount++;
	if (x2 == j1 || x2 == j3) ballCount++;
	if (x3 == j1 || x3 == j2) ballCount++;

	if (strike == strCount && ball == ballCount) {
		return -1;
	}
	return 1;

}

int main() {

	memset(dp_Array, -1, sizeof(dp_Array));
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &LIS, &st, &ball);
		for (int j = 123; j <= 987; j++) {
			if (dp_Array[j] == -1)
				dp_Array[j] = dp(j, LIS, st, ball);
		}
	}
	for (int i = 123; i <= 987; i++) {
		if (dp_Array[i] == -1) count++;
	}
	printf("%d", count);
	return 0;

}
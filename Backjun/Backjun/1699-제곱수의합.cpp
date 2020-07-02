#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//다시 디버깅 돌려보기....
int dp_Array[100001] = { 0, };

int dp(int x) {
	if (dp_Array[x] != 0) return dp_Array[x];
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (x == 3) return 3;
	for (int i = 1; i * i <= x; i++) {
		if (dp_Array[x] > dp(x - i * i) + 1 || dp_Array[x] == 0)
			dp_Array[x] = dp(x - i * i) + 1;
	}
	return dp_Array[x];

}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", dp(n));
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int func(int n) {
	int share = n / 5; 
	int remainder = n % 5;
	int result = share;
	int temp = share;
	for (int i = 0; i <= temp; i++) {
		if (remainder % 3 == 0) {
			result = share + (remainder / 3);
			return result;
		}
		else {
			share--;
			remainder = n- (share * 5);
		}
	}
	return -1;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d",func(n));
	return 0;
}
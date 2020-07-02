#include <stdio.h>
#pragma warning(disable :4996)

int main() {
	int arr[9] = { 0. };
	int num = 0;
	int temp = 0, sum = 0;;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		arr[i] = num;
		sum += num;
	}
	int total = sum - 100;

	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			if (arr[i] + arr[j] == total) {
				arr[i] = 0;
				arr[j] = 0;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 2; i < 9; i++) {
		printf("%d\n", arr[i]);
	}

}
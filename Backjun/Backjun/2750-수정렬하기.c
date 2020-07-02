#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {

	int num = 0;
	int temp = 0;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);
	int a = 0;
	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		arr[i] = a;
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}
	free(arr);
	return 0;


}
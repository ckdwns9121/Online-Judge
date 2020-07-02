#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#pragma warning(disable:4996)

int main() {
	char arr[100] = "";
	char temp;
	int length = 0;
	scanf("%s", &arr);
	length = strlen(arr);
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	for (int i = 0; i < length; i++) {
		printf("%c", arr[i]);
	}
	return 0;
}
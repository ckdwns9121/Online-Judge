#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define MAX 1000001
int main() {
	char arr[MAX] = {};
	fgets(arr, int(MAX), stdin);
	int i = 0;
	int cnt = 1;//처음 단어의 갯수

	while (arr[i] != '\0')
	{
		if (arr[i] == ' ') cnt++;
		i++;
	}
	if (arr[i - 2] == ' ')cnt--;
	if (arr[0] == ' ')cnt--;
	printf("%d", cnt);
	return 0;
}
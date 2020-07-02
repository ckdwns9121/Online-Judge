#include <queue>
#include <iostream>
#pragma warning(disable:4996)
using namespace std;
/*
1 2 3 4
0. 1À» »«´Ù (234)
1. 2¸¦ »©°í 2¸¦ »ðÀÔÇÑ´Ù.(342)
2. 3À»»«´Ù (42)
3. 4¸¦»©°í 4¸¦ »ðÀÔÇÑ´Ù.(24)
4. 2¸¦»«´Ù
*/

int main() {
	queue<int> q;
	int n, i = 0, temp = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)q.push(i);
	while (!q.empty()) {
		temp = q.front();
		if (!i % 2) q.pop();
		else if (i % 2) { q.pop(); q.push(temp); }
		i++;
	}
	printf("%d", temp);
	return 0;
}
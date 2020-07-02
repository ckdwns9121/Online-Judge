#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

#define MAX 101

using namespace std;
string matrix[MAX];
int visit[MAX][MAX];
int direct[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int N, M;

int bfs(int x, int y) {

	queue<pair<int,int>> q;
	visit[x][y] = 1;
	q.push(make_pair(x, y));

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = x + direct[i][1];
			int next_y = y + direct[i][0];

			if ((0 <= next_x && next_x < N) && (0 <= next_y && next_y < M)) {
				if (!visit[next_x][next_y] && matrix[next_x][next_y] == '1') {
					q.push(make_pair(next_x, next_y));
					visit[next_x][next_y] = visit[x][y] + 1;
				}
	
			}
		}
	}
	return visit[N - 1][M - 1];
}


int main() {
	cin >> N >> M; 
	for (int i = 0; i < N; i++) {
		cin >> matrix[i];
	}
	cout << bfs(0, 0);

	return 0;
}
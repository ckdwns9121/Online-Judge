#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#pragma warning(disable:4996)

using namespace std;
int main() {
	priority_queue< int, vector<int>, less<int> > min_Heap;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int N, x, value;
	cin >> N;
	while (N--) {
		cin >> x;
		if (x) min_Heap.push(x);
		else {
			if (min_Heap.empty()) cout << "0\n";
			else {
				cout << min_Heap.top() << endl;
				min_Heap.pop();
			}

		}
	}
}
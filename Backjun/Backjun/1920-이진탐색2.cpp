#include <iostream>
#include <algorithm>

using namespace std;
int arr[100001];

void binarySearch(int n,int key) {
	int start = 0;
	int end = n - 1;
	int mid = 0;
	while (end - start >= 0) {
		mid = (start + end) / 2;
		if (arr[mid] == key) {
			cout << "1\n";
			return;
		}
		else if (arr[mid] > key) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	cout << "0\n";
	return;

}
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 속도 향상 위해
	int N,M;
	cin >> N;
	for (int i = 0; i < N; i++) 
		cin >> arr[i];

	sort(arr, arr + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		int temp = 0;
		cin >> temp;
		binarySearch(N, temp);
	}

	return 0;
}
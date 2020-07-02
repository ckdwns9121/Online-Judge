#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

int func(vector<int>& v) {
	int result = 0;
	if (v[0] == v[1] && v[1] == v[2])
		result = 10000 + v[0] * 1000;
	else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2]) {
		if (v[0] == v[1] || v[0] == v[2])
			result = 1000 + v[0] * 100;
		else
			result = 1000 + v[1] * 100;
	}
	else
		result = v[2] * 100;


	return result;
}
int main() {
	int n;
	vector<int> v;
	vector<int> temp;
	int sum = 0;
	scanf("%d", &n);
	v.reserve(n);
	temp.resize(n);
	while (n--) {
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());
		temp.push_back(func(v));
	}
	sort(temp.begin(), temp.end());
	cout << temp[2];

	return 0;
}
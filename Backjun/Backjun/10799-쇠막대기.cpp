#include <iostream>
#include <stack>
#include <string>
using namespace std;
string str;

int func(string s) {
	stack<char>st;
	int result = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') st.push(s[i]);
		else {
			st.pop();
			if (s[i - 1] == '(') result += st.size();
			else result++;
		}
	}
	return result;

}


int main(void) {
	cin >> str;
	cout << func(str);
	return 0;
}
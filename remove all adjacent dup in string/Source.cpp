#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
string removeDuplicates(string S);
int main() {
	string A = "ddabbaca";
	cout << removeDuplicates(A) << endl;
	return 0;
}
string removeDuplicates(string S) {
	string result;
	stack<char> str;
	for (int ptr = 0; ptr < S.size(); ptr++) {
		if (str.size() != 0 && str.top() == S[ptr]) {
			str.pop();
		}
		else {
			str.push(S[ptr]);
		}
	}
	while (!str.empty()) {
		result += str.top();
		str.pop();
	}
	reverse(result.begin(), result.end());
	return result;
}
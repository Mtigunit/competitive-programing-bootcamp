#include <iostream>
#include <stack>

using namespace std;

bool	ParenthesesBalance(string& str) {
	stack<char> stack;
	for (char c : str) {
		if (c == '(' || c == '[') {
			stack.push(c);
		} else if (c == ')' && (!stack.empty() && stack.top() == '(')) {
			stack.pop();
		} else if (c == ']' && (!stack.empty() && stack.top() == '[')) {
			stack.pop();
		}
		else {
			return (false);
		}
    }
	return (stack.empty());
}

int main() {
	int	nc;
	cin >> nc;
	cin.ignore();
	string	str;
	for (int i = 0; i < nc; i++) {
		getline(cin, str);
		if (ParenthesesBalance(str) == true) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}

	}
}

#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> arr;
	string op;
	int	value;

	while (cin >> op) {
		if (op == "insert") {
			cin >> value;
			arr.insert(value);
		} else if (op == "exists") {
			cin >> value;
			set<int>::iterator ptr = arr.find(value);
			if (ptr != arr.end() && *ptr == value) {
                cout << "true" << endl;
			} else {
                cout << "false" << endl;
			}
		} else if (op == "delete") {
			cin >> value;
			arr.erase(value);
		}
	}
}

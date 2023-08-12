#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main() {
	int	nc;
	int tmp;

	cin >> nc;
	multiset<int> arr;
	for (size_t i = 0; i < nc; i++) {
		cin >> tmp;
		arr.insert(tmp);
	}
	for (multiset<int>::iterator ptr = arr.begin(); ptr != arr.end(); ptr++) {
		cout << *ptr << ' ';
	}
	cout << endl;
	return (0);
}


#include <iostream>

using namespace std;

int main() {
	int	nc;
	cin >> nc;
	int arr[nc];
	for (size_t i = 0; i < nc; i++) {
		cin >> arr[i];
		if (arr[i] >= 0) {
			arr[i] += 2;
		}
		cout << arr[i];
		if (i != nc - 1) {
			cout << ' ';
		}
	}
}

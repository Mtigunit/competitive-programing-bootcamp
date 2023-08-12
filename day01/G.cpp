
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int columns;
	long long	num = 0;

	cin >> columns;
	vector<int> arr(columns);
	
	for (size_t i = 0; i < columns; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < columns; i++) {
		if (i + 1 < columns && arr[i + 1] < arr[i]) {
			num += arr[i] - arr[i + 1]; 
			arr[i + 1] += arr[i] - arr[i + 1]; 
		}
	}
	cout << num << "\n";
}

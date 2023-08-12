// Static Range Sum Queries // O(columns + lines)
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int			columns, lines;

	cin >> columns >> lines;
	vector<int>	arr(columns);
	for (size_t i = 0; i < columns; i++) {
		cin >> arr[i];
	}
	vector<long> sumArr(columns + 1, 0);

	for (size_t i = 0; i < columns; i++) {
		sumArr[i + 1] = sumArr[i] + arr[i];
	}
	
	for (size_t i = 0; i < lines; i++) {
		int	start, end;
		cin >> start >> end;
		cout << sumArr[end] - sumArr[start - 1] << "\n";
	}
	return (0);
}

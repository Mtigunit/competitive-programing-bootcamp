// Static Range Sum Queries
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int	c, target;
	long long sum = 0, count = 0;

	cin >> c >> target;
	vector<int>	val(c);
	for (size_t i = 0; i < c; i++) {
		cin >> val[i];
	}

	map<long long, int> seen;
	seen[0] = 1;
	for (size_t i = 0; i < c; i++) {
		sum += val[i];
		count += seen[sum - target];
		seen[sum] += 1;
	}
	cout << count << "\n";
	
	return (0);
}

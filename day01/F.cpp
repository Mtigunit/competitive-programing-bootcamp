// Minimizing Coins

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	long	n, desired, numberOfCoins = 0;
	cin >> n >> desired;
    vector<int>	coins(n);
	for (size_t i = 0; i < n; i++) {
		cin >> coins[i];
	}

	cout << numberOfCoins << "\n";
	return (0);
}
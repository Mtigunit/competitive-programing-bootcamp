#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    int n;
    std::cin >> n;
	vector<string>	arr(n);
	for (size_t i = 0; i < n; i++){
		cin >> arr[i];
	}
	vector<vector<int>> dp(n + 1, vector<int> (n + 1));

	for (size_t i = 1; i <= n; i++) {
		for (size_t j = 1; j <= n; j++) {
			// if ()
		}
		
	}
	
	return (0);
}
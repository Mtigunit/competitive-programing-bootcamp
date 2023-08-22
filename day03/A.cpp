#include <iostream>
#include <cmath>

#define MOD 1000000007

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    int n;
    std::cin >> n;

    long long	result = 1;
    for (int i = 0; i < n; i++) {
        result = (result * 2) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}

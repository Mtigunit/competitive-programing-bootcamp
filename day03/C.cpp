#include <iostream>
#include <cmath>
#include <set>

#define MOD 1000000007

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string	str;
    std::cin >> str;

	std::set<char> arr;
	for (size_t i = 0; i < str.length(); i++) {
		arr.insert(str[i]);
	}
	long long result = (factorial(str.length()) / factorial(arr.size())) % MOD;
	std::cout << result << "\n";
    return 0;
}

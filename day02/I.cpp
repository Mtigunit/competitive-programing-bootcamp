#include <iostream>
// #include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int gcd(int a, int b) {
    if (b == 0) return (a);
	return (gcd(b, a % b));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll	n, a, b; cin >> n >> a;
	n--;
	while (n-- > 0) {
		cin >> b;
		a = gcd(a, b);
	}
	cout << a << "\n";
}

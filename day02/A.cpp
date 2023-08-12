// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define MOD 1000000007

ll	binaryPow(ll n, ll m) {
	if (m == 0) return 1;
	if (m == 1) return n;

	ll res = binaryPow(n, m / 2) % MOD;
	res = (res * res) % MOD;
	if (m % 2 == 1) res = (res * n) % MOD;
	return (res % MOD);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t; cin >> t;

	for (ll i = 0; i < t; i++)
	{
		ll n; cin >> n;
		ll m; cin >> m;
		ll p; cin >> p;
		cout << binaryPow(n, binaryPow(m, p)) << "\n";
	}
}

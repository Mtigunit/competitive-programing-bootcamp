#include <iostream>
#include <iomanip>
#include <cmath>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        long double x0 = c / a, x1, f, fp, res;
        while (1) {
            f = a * x0 + (b * sin(x0)) - c;
            fp = a + (b * cos(x0));
            x1 = x0 - (f / fp);
            res = abs(x1 - x0);
            if (res < 1e-6) {
                break;
            }
            x0 = x1;
        }
        cout << fixed << x1 << "\n";
    }
}

#include <iostream>

using namespace std;

// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
	
//     int n;
//     std::cin >> n;

//     int first = 0, second = 1;
// 	int next = 0;
//     for (int i = 0; i < n; ++i) {
//         next = first + second;
//         first = second;
//         second = next;
//     }
// 	cout << next << "\n";
//     return 0;
// }


int feb(int n) {
    if (n <= 2)
        return (n);
    return (feb(n - 1) + feb(n - 2));
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int x;
    cin >> x;
    cout << feb(x) << "\n";
}

// // Static Range Sum Queries // O(columns + lines)
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);

// 	int			columns, lines;

// 	cin >> columns >> lines;
// 	vector<int>	arr(columns);
// 	for (size_t i = 0; i < columns; i++) {
// 		cin >> arr[i];
// 	}
// 	vector<long> sumArr(columns + 1, 0);

// 	for (size_t i = 0; i < columns; i++) {
// 		sumArr[i + 1] = sumArr[i] + arr[i];
// 	}
	
// 	for (size_t i = 0; i < lines; i++) {
// 		int	start, end;
// 		cin >> start >> end;
// 		cout << sumArr[end] - sumArr[start - 1] << "\n";
// 	}
// 	return (0);
// }



#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int countMatchingIntegers(const string& templateStr) {
    int count = 0;
    int minLength = pow(10, templateStr.length() - 1);
    int maxLength = pow(10, templateStr.length()) - 1;

    for (int num = minLength; num <= maxLength; ++num) {
        string numStr = to_string(num);
        if (numStr.length() != templateStr.length()) {
            continue;
        }

        bool match = true;
        for (size_t i = 0; i < templateStr.length(); ++i) {
            if (templateStr[i] == '?' || templateStr[i] == numStr[i]) {
                continue;
            } else {
                match = false;
                break;
            }
        }

        if (match) {
            count += 1;
        }
    }

    return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int result = countMatchingIntegers(s);
        cout << result << "\n";
    }

    return 0;
}

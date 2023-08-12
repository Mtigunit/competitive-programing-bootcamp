#include <iostream>
#include <set>

using namespace std;

int main() {
	multiset<string>	strArr;
	int					n;
	cin >> n;
	string	str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		strArr.insert(str);
	}
	size_t wordCount = 0;
	string strTmp;
	for (auto ptr = strArr.begin(); ptr != strArr.end(); ptr++) { // auto = multiset<string>::iterator
		size_t i = strArr.count(*ptr);
		if (i == wordCount) {
			strTmp = (strTmp > *ptr) ? strTmp : *ptr; 
		} else if (i > wordCount) {
			wordCount = i;
			strTmp = *ptr;
		}
	}
	cout << strTmp + " " << wordCount << endl;
}

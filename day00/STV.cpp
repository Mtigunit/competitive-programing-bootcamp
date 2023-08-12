#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, target, num;
	scanf("%d %d", &n, &target);

	map<int, int>	arr;
	bool o = true;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num);
		int c = target - num;
		if (o && arr.find(c) != arr.end()) {
			printf("%d %d\n", arr[c], i);
			o = false;
		}
		arr.insert(make_pair(num, i));
		// arr[num] = i;
	}
	if (o)
	printf("IMPOSSIBLE\n");
	return 0;
}

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;

	scanf("%d", &n);
    std::stack<int> stack;
    while (n--) {
        int query;
		scanf("%d", &query);
        if (query == 1) {
            int toPush;
			scanf("%d", &toPush);
            stack.push(toPush);
        } else if (query == 2) {
            if (!stack.empty()) {
                stack.pop();
            }
        } else if (query == 3) {
            if (!stack.empty()) {
				printf("%d\n", stack.top());
            } else {
				printf("Empty!\n");
            }
        }
    }
    return 0;
}

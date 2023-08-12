#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<priority_queue<int>>	queues(n);

    for (int i = 0; i < q; ++i) {
        int op, t;
        cin >> op >> t;

        if (op == 0) {
            int x;
            cin >> x;
            queues[t].push(x);
        } else if (op == 1) {
            if (!queues[t].empty()) {
                cout << queues[t].top() << endl;
            }
		} else if (op == 2) {
			if (!queues[t].empty()) {
				queues[t].pop();
			}
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> operations;
        int last = n;

        // Pairing the largest number with the smallest iteratively
        for (int i = n - 1; i > 1; --i) {
            operations.push_back({last, i});
            last = (last + i + 1) / 2;  // Rounding up (a + b + 1) / 2
        }
        // Final pair
        operations.push_back({last, 1});
        last = (last + 1 + 1) / 2;

        // Output the final result and the operations
        cout << last << endl;
        for (auto& op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}

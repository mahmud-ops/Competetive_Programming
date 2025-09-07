#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;

        int current = x;
        for (int i = 0; i < k; i++) {
            current *= 2;
        }
        cout << current << "\n";
    }
    return 0;
}

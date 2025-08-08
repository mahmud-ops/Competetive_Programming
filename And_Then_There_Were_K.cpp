#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;

        int i = 0;
        while ((1LL << (i+1)) <= n) i++;

        cout << (1LL << i) - 1 << '\n';
    }
    return 0;
}

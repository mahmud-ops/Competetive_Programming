#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> even;
        vector<ll> odd;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                even.push_back(a[i]);
            } else {
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        vector<ll> res;
        int i = 0;
        int j = 0;
        while (i < even.size() && j < odd.size()) {
            if (even[i] < odd[j]) {
                res.push_back(even[i]);
                i++;
            } else {
                res.push_back(odd[j]);
                j++;
            }
        }
        while (i < even.size()) {
            res.push_back(even[i]);
            i++;
        }
        while (j < odd.size()) {
            res.push_back(odd[j]);
            j++;
        }
        for (int k = 0; k < res.size(); k++) {
            if (k > 0) cout << " ";
            cout << res[k];
        }
        cout << "\n";
    }
    return 0;
}
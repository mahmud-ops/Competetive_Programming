#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll s = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] > 0 && (i == 0 || a[i-1] == 0)) s++;
        }

        if(s >= 2){
            s = 2;
        }

        cout << s << endl;
    }
    return 0;
}
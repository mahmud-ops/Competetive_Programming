#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n,k,x;
        cin >> n >> k >> x;

        ll mnEl = (k*(k+1))/2;
        ll mxEl = 0;

        int temp = n;
        for(ll i = 0 ; i < k ; i++){
            mxEl += temp;
            temp--;
        }

        if(x <= mxEl && x >= mnEl) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
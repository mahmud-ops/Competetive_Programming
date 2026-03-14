#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        if(n < 4 || n % 2 != 0) cout << -1 << endl;
        else {
            ll min_buses = (n + 5) / 6;
            ll max_buses = n / 4;
            cout << min_buses << " " << max_buses << endl;
        }
    }
    return 0;
}
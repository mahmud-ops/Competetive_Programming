#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        set<ll> a;

        for(int i = 0 ; i < n ; i++){
            ll val;
            cin >> val;

            a.insert(val);
        }

        cout << *a.rbegin() - *a.begin()  << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    ll t; cin >> t;
    while(t--) {
       ll n;
       cin >> n;
       
       if(n%3 == 0) cout << "Second\n";
       else cout << "First\n";
    }
    return 0;
}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;

        vector <ll> a(n);

        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll ans = 1, curr = 1;

        for(int i = 1 ; i < n ; i++){
            if(a[i] - a[i-1] <= k) curr ++;
            else curr = 1;
            ans = max(curr,ans);
        }

        cout << n - ans << endl;
    }
    return 0;
}
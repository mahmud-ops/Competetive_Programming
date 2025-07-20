#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int ans = n/10;
        if(n % 10 == 9){
            ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
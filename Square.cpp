#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        vector<int> a(4);
        for(int i = 0 ; i < 4 ; i++){
            cin >> a[i];
        }

        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
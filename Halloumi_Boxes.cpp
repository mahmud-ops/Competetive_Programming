#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;

        vector<int> a(n);

        bool s = true; 
        for(int i = 0 ; i < n ; i++){
        	cin >> a[i];
        }

        if(k == 1){
        	for(int i = 0 ; i < n-1 ; i++){
        		if(a[i] > a[i+1]){
        			s = false;
        			break;
        		}
        	}
        }

        if(k >= 2) s = true;

        if(s) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}
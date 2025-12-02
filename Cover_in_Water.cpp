#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
    	int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;

        int found = s.find("...");


        if (found != -1){
        	ans = 2;
        }
        else{
        	for(int i = 0 ; i < n ; i++){
        		if(s[i] == '.'){
        			ans  += 1;
        		}
        	}
        }

        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
 		int n;cin >> n;
 		int c_1 = 0,c_2 = 0;
 		int numCnt = 1;

 		vector <int> a(n);
 		for(int i = 0 ; i < n ; i++){
 			cin >> a[i];
 		}       

 		sort(a.begin(),a.end());

 		set <int> distinct(a.begin(),a.end());

 		if(distinct.size() == 1 || n == 2){
 			cout << "YES\n";
 		}
 		else if (distinct.size() == 2){
 			int c1 = count(a.begin(), a.end(), *distinct.begin());
 			int c2 = count(a.begin(), a.end(), *distinct.rbegin());

 			cout << (abs(c1-c2) <= 1 ? "YES\n" : "NO\n");
 		}
 		else{
 			cout << "NO\n";
 		}

    }
    return 0;
}
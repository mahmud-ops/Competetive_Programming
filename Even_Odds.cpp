#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    ll n , k;
    cin >> n >> k ;

    vector<ll> v;

    int i;
    for(i = 1 ; i <= n ; i += 2){
        v.push_back(i);
    }
    for(i = 2; i <= n ; i += 2){
        v.push_back(i);
    }

    cout << v[k - 1] << endl;;


    return 0;
}
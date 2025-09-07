#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    ll n , k , s;
    cin >> n >> k ;

    if(k <= (n + 1)/2){
        s = 2*k - 1;
    }
    else{
        s = 2 * ( k - ((n + 1)/2));
    }

    cout << s << endl;

    return 0;
}
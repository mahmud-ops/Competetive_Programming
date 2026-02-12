#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1) a[i]++;
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] % a[i - 1] == 0)
                a[i]++;
        }

        for (ll x : a)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}

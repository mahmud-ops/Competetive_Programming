#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll range_sum(const vector<ll> &pref, int l, int r)
{
    return pref[r] - pref[l - 1];
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> pref(n + 1, 0);

        // prefix sum vector
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll newSum = pref[n] - range_sum(pref, l, r) + k * (r - l + 1);
            if (newSum % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
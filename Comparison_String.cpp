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
        string s;

        cin >> n >> s;

        ll curr = 1, ans = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                curr++;
            else
                curr = 1;
            ans = max(curr, ans);
        }

        cout << ans + 1 << endl;
    }
    return 0;
}
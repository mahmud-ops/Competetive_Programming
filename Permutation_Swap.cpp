#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        vector<int> diffs;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            diffs.push_back(abs(p[i] - (i + 1)));
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = gcd(ans, diffs[i]);
        }

        cout << ans << endl;
    }
    return 0;
}
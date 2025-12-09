#include <bits/stdc++.h>
using namespace std;

long long solve_case(vector<long long> a)
{
    long long sum = 0;
    long long max_val = 0;
    bool has_odd = false;

    for (long long x : a)
    {
        sum += x;
        max_val = max(max_val, x);
        if (x % 2 == 1)
            has_odd = true;
    }

    // If there's at least one odd element, we can achieve the total sum
    if (has_odd)
    {
        return sum;
    }

    // All elements are even - we need to keep dividing by 2 until we find an odd
    while (max_val % 2 == 0)
    {
        max_val /= 2;
    }

    return max_val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << solve_case(a) << "\n";
    }

    return 0;
}
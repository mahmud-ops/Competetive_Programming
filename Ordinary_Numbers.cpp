#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;

        for (int d = 1; d <= 9; d++)
        {
            long long num = d;

            while (num <= n)
            {
                count++;
                num = num * 10 + d;
            }
        }

        cout << count << endl;
    }

    return 0;
}

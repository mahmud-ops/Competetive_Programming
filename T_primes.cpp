#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if(i != 1 && i != n)
                if (i != n / i)
                    count += 2;
                else
                    count += 1;
            }
            if (count > 1)
            {
                break;
            }
        }

        if (count == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
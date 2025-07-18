#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        int a, b;
        for (a = 2; a < p; a++)
        {
            b = p / a;

            if (b <= a)
                b += 2;

            if ((p % a > 0 && a != b) && p % a == p % b)
            {
                cout << a << " " << b << endl;
                break;
            }
        }
    }
    return 0;
}
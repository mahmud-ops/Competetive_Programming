#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        bool isSem = false;

        if (b >= a)
        {
            if (((n % 2 == 0 && b % 2 == 0)) || ((n % 2 != 0 && b % 2 != 0)))
                isSem = true;
        }
        else if (a > b)
        {
            if (((n % 2 == 0 && b % 2 == 0)) || ((n % 2 != 0 && b % 2 != 0))){
                if(((n % 2 == 0 && a % 2 == 0)) || ((n % 2 != 0 && a % 2 != 0))){
                    isSem = true;
                }
            }
                
        }

        if (isSem)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
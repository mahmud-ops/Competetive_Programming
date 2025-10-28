#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    string p;
    cin >> p;

    bool found = false;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
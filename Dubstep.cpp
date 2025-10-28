#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size();)
    {
        if (i+2 < str.size() && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 3;
            if (count)
            {
                cout << " ";
            }
        }
        else
        {
            count++;
            cout << str[i];
            i++;
        }
    }
    cout << endl;

    return 0;
}
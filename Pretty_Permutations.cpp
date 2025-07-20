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

        vector<int> arr;
        for (int i = 1; i <= n; i++)
        {
            arr.push_back(i);
        }

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
            for (int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
        }
        else
        {
            for (int i = 3; i < n; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
            cout << "3 1 2 ";
            for (int i = 3; i < n; i++){
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
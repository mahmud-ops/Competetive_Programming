#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int Ax, Ay, Bx, By, Fx, Fy;
        cin >> Ax >> Ay;
        cin >> Bx >> By;
        cin >> Fx >> Fy;

        int path = abs(Ax - Bx) + abs(Ay - By);

        if((Ax == Bx && Bx == Fx) && ((Fy > Ay && Fy < By) || (Fy < Ay && Fy > By))){
            path += 2;
        }
        else if((Ay == By && By == Fy) && ((Fx > Ax && Fx < Bx) || (Fx < Ax && Fx > Bx))){
            path += 2;
        }

        cout << path << endl;
    }
    return 0;
}
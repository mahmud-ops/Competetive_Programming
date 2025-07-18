#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int x;
        cin >> x;
        vector<int> digits;

        while(x){
            int digit = x % 10;
            digits.push_back(digit);
            x /= 10;
        }

        int minDigit = 9;
        for(int i = 0 ; i < digits.size() ; i++){
            minDigit = min(minDigit,digits[i]);
        }

        cout << minDigit << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int a[n],b[n];

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];    
        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i];    
        }

        int it = 0;

        while(1){
            int index = -1;
            for(int i = 0 ; i < n ; i++){
                if(a[i] > b[i]){
                    index = i;
                    break;
                } 
            }
            if(index == -1) break;
            a[index]--;

            int index2 = -1;
            for(int i = 0 ; i < n ; i++){
                if(a[i] < b[i]){
                    index2 = i;
                    break;
                } 
            }
            if(index2 != -1) a[index2]++;

            it++;
        }

        cout << it + 1<< endl;
    }
    return 0;
}
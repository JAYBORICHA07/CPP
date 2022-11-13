#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num == 0)
        return 0;
    int x= num;
    int m = 0;
    while( x != 0){
        m = (m << 1) | 1;
        x = x  >> 1;
    }
    int ans = (~num) & m;
    cout << ans << endl;
} 
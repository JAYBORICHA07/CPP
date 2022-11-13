#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    int ans=0;
    int i=0;
    cin >> num;
    while(num != 0){
        int bit = num % 10;
        ans = (bit * pow(2, i))+ ans;
        i++;
        num = num/10;
    }
    cout << ans << endl;
} 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, sum = 0, rem = 1, pro = 1;
    cin >> num;
    while(num != 0){
        rem = num % 10;
        sum = sum + rem;
        pro = pro * rem;
        num = num / 10;
    }
   int sub;
   sub = pro - sum;
    cout << sub << endl;
} 
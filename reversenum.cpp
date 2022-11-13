#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, revnum = 0, rem = 1;
    cin >> num;
    while(num != 0){
        rem = num % 10;
        revnum = (10 * revnum) + rem;

        num = num / 10;
    }
    cout << revnum << endl;
} 
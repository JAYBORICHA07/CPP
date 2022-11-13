#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    /*
    here we want to print the pattern like below
    a b c
    b c d 
    c d e 
    */
    while(i<=n){
        int j=1;
        char ch = 'a' + i -1;
        while (j<=n)
        {
            
            cout << ch << " ";
            j++;
            ch = ch + 1;
        }
        cout<< endl;
        
        i++;
    }
}
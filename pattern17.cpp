#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    
    /*
    here we want to print the pattern like below
    d
    c d 
    b c d
    a b c d
    */
   
    while(i<=n){
        int j=1;
        
        while (j<=i)
        {
            char ch = ('a'+(n-i+j-1));
            cout << ch << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
} 
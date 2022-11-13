#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    
    /*
    here we want to print the pattern like below
    a
    b c
    c d e 
    d e f g 
    */
   
    while(i<=n){
        int j=1;
        
        while (j<=i)
        {
            char ch = ('a'+i+j-2);
            cout << ch << " ";
            j++;
            ch = ch +1;    
        }
        cout<< endl;
        i++;
    }
}
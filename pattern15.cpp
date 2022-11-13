#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    char ch = 'a';
    
    /*
    here we want to print the pattern like below
    a
    b c
    d e f
    g h i j
    */
   
    while(i<=n){
        int j=1;
        
        while (j<=i)
        {
            
            cout << ch << " ";
            j++;
            ch = ch +1;    
        }
        cout<< endl;
        i++;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    /*
    here we want to print the pattern like below
    a b c
    a b c 
    a b c
    */
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            char ch ='a'+j-1;
            cout << ch << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    /*
    here we want to print the pattern like below
    a a a
    b b b
    c c c
    */
    while(i<=n){
        int j=1;
        char ch='a'+i-1;
        while (j<=n)
        {
            cout << ch << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
}

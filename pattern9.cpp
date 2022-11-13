#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    /*
    here we want to print the pattern like below
    1
    2 1
    3 2 1
    4 3 2 1 
    5 4 3 2 1
    */
    while(i<=n){
        int j=1;
        int value = i;
        while (j<=i)
        {
            cout << i-j+1 << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    /*
    here we want to print the pattern like below
    *
    * *
    * * *
    * * * *
    */
    while(i<=n){
        int j=1;
        while (j<=i)
    /*
    here if we take (n-i+1) insted of i then we will gwt a pattern like this
    * * * *
    * * * 
    * * 
    * 
    */
        {
            cout << "*" << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    /*
    here we want to print the pattern like below
    1
    2 2
    3 3 3
    4 4 4 4
    */
    while(i<=n){
        int j=1;
        while (j<=i)
        {
            cout << i << " ";
            j++;
        }
        cout<< endl;
        i++;
    }
}
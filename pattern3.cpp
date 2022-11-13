#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        // n is row and j is coloum
        //123
        //123
        //123
        
        while (j<=n)
        {
            cout << j;
            //if we replace above j with n-j+1 then we will have some pattern like below
            //321
            //321
            //321
            j++;
        }
        cout<< endl;
        i++;
    }
}
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        // n is row and j is coloum
        //111
        //222
        //333
        
        while (j<=n)
        {
            cout << i;
            j++;
        }
        cout<< endl;
        i++;
    }
}
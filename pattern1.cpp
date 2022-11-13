#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        // n is row and j is coloum
        while (j<=n)
        {
            cout << "*";
            j++;
        }
        cout<< endl;
        i++;
    }
}
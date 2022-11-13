#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for( int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            cout << "*";
        }
        int space = n-i;
        while(space){
            cout << " ";
            space--;
        }
        int space1 = n-i;
        while(space1){
            cout << " ";
            space1--;
        }
        for(int k=1; k<=i; k++){
            cout << "*";
            
        }
        cout << endl;
    }
    
}
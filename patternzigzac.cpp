#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

// for n=9
//   *   *
//  * * * *
// *   *   *

 
    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
             cout << "*";
        }
        cout << endl;
    }

}
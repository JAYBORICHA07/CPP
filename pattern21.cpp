#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    
    /*
    here we want to print the pattern like below

    1111
     222
      33
       4
    */
   
    while(i<=n){
        //pela space print kri lai e
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
        //hve star print kri laiye 
        int j=1;
        while (j<=(n-i+1))
        {
            cout << i;
            j++;
        }
        cout<< endl;
        i++;
    }
} 
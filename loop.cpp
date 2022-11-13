#include<iostream>
using namespace std;

int main(){
    
    // WHILE LOOP PRACTISE
    
    /*int n;
    cin >> n;
    int i=1, sum=0;
    while(i<=n){
        if(i % 2 == 0){
            sum = sum + i;
            }
            i = i + 1;
    }    
    cout << sum << endl; */
     int n;
    cin >> n;
    int i=2, sum=0;
    while(i<=n){
            sum = sum + i;
            i = i + 2;
    }    
    cout << sum << endl;
}

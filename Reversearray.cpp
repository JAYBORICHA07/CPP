#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s=0, e=n-1;
    while(e>s){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    
}
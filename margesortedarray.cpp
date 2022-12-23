#include<bits/stdc++.h>
using namespace std;


int main(){
    int m , n;
    cout << "enter size of 1st and 2nd sorted array" << endl;
    cin >> m  >> n ;
    int arr1[m] , arr2[n];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (int x = 0; x < n; x++)
    {
        cin >> arr2[x];
    }
    int s=0,i=0,j=0;
    int arr3[m+n];
    for (int s = 0; s < m+n; s++)
    {
        if(arr1[i]>arr2[j]){
            arr3[s] = arr2[j];
            j++;
        }
        else if(arr1[j]>arr2[i]){
            arr3[s] = arr1[i];
            i++;
        }
        else{
            arr3[s] = arr1[i];
            i++;
            j++;
        }
    }
    for (int i = 0; i < m+n; i++)
    {
        cout << arr3[i];
    }
    
}
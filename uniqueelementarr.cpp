#include<bits/stdc++.h>
using namespace std;

int uniqueOccourrences (int arr[],int size){

    int ans=0;
    //checking the repeatation of each element
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    
    return ans;
}


int main(){
    int size, ans;
    cout << "enter the size of array";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    ans = uniqueOccourrences(arr, size);

    cout << endl << ans << endl << endl;
}

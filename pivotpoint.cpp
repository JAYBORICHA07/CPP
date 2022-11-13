#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[], int size){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    
}

int main(){
    int arr[5]={4,5,6,2,3}, ans;
    ans = pivot(arr, 5);
    cout << arr[ans] << endl;

}
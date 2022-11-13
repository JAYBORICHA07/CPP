#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int size){
    int start = 0;
    int end = size-1;
    int ans;

    int mid = start + (end-start)/2;

    while(start<end){
        
         
        if(arr[mid]<arr[mid+1]){
        start = mid + 1;
        }
        else {
            end = mid;
        }
    mid = start + (end-start)/2;
     }

    cout << start << endl;

}

int main(){
        
    int even[8]={1,2,3,4,5,6,7,6};
    

    binarySearch(even , 8);
   

    


}
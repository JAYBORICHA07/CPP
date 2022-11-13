#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int target){

    int start=0, end=size-1;
    int mid = start + (end-start)/2;

    while (start<end)
    {
        if(arr[mid] >= arr[0])
            start = mid +1;
        else  end = mid;

        mid = start + (end-start)/2;
    }

    if(start <= target <= arr[size-1]){
        end = size-1;
        mid = start + (end-start)/2;
        while(start<end){
            if(target == mid){
                return mid;
            }
            else if(target > mid){
                start = mid + 1;
            }
            else if(target < mid){
                end = mid -1;
            }
            else return -1;
            
        }
    }
    else{
        start= 0;
        mid = start + (end-start)/2;
        while(start<end){
            if(target == mid){
                return mid;
            }
            else if(target > mid){
                start = mid + 1;
            }
            else if(target < mid){
                end = mid -1;
            }
            else return -1;
            
    }
    
    

}
}

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int target;
    cout << "enter the element to search";
    cin >> target;
    cout << search(arr, size, target);
}
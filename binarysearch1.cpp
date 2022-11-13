#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end-start)/2;

    }
    return -1;


}

int main(){
        
    int even[6]={0, 17, 22, 36, 41, 60};
    int odd[5]={0, 44, 43, 55, 67};

    int indexEven = binarySearch( even , 6, 61);
    int indexOdd = binarySearch( odd , 5, 67);

    cout << "The index of 41 is : " << indexEven << endl;
    cout << "The index of 43 is : " << indexOdd << endl;

}
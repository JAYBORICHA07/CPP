#include<bits/stdc++.h>
using namespace std;


void swapAlternate ( int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArr( int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
 
int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};
    
    swapAlternate( even, 8);
    printArr( even, 8);
    cout << endl;
    swapAlternate( odd, 7);
    printArr( odd, 7);
}


#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int  size, int start){
    int end = size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;

    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int start;
    cout << "enter start :";
    cin >> start;
    reverse(arr, size, start);
}
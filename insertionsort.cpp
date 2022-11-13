#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int q=0; q<n; q++){
        cin >> arr[q];
    }
    for(int i=1; i<n; i++){
        int tempt = arr[i];
        int j=i-1;
        while(j>=0){
            if(tempt<arr[j]){
                arr[j+1]=arr[j];
            }
            else
            break;
            j--;
        }
        arr[j+1]=tempt;
    }
    for(int l=0; l<n; l++){
        cout << arr[l] << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;

void uniqueOccourrences (int arr[],int size){
    int count[size];
    int ans=0;
    //checking the repeatation of each element
    for(int i=0; i<size; i++){
        int rep=0;
            for(int j=0; j<size; j++){
                if(arr[i]==arr[j]){
                    rep++;
                }
            }
            count[i] = rep;
    }
    //comparing the repeatation of each element
    for(int h=0; h<size; h++){
        for(int y=0; y<size; y++){
            if(y+1<size){
            if(arr[h] != arr[y+1]){
                if(count[h]==count[y+1]){
                    ans++;
                }

            }
            }
        }
        if(ans!=0)
            break;
    }
    //returning answer
    if(ans!=0)
         cout << "false" << endl;
    else
        cout << "true" << endl;
    
    
}


int main(){
    int arr[100], size;
    cout << "enter the size of array";
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    uniqueOccourrences(arr, size);

}

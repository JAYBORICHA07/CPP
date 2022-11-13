#include<bits/stdc++.h>
using namespace std;
void printArray ( int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i];
        }
    }
int main(){
    int nums1[6] = {1,2,3,4,0,0};
    int nums2[3] = {2,5,6};
    int m=3,n=3;
    int tempt;
    int i=0,j=0,count=0;        
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                tempt = nums1[i];
                nums1[i] = nums2[j];
                i++;
                j++;
            }
            else
            {
                i++;
                }
            }
                count=count+1;
        while(i<m){
            nums1[i] = nums1[count];
            count++;
            i++;
            }
        while(j<n){
            nums2[j] = nums1[count];
            j++;
            count++;
            }
    printArray(nums1,6);
}
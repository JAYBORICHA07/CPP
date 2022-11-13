#include<bits/stdc++.h>
using namespace std;

long long int sqrt(int number){
    int start = 0;
    int end = number;
    long long int ans = -1;
    long long int mid = start + (end-start)/2;

    while(start<=end){
        long long int sqre = mid*mid;
        if(sqre == number){
            return mid;
        } 

        if(sqre > number){
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
        
    int number;
    cin >> number;
    cout << sqrt(number);


}
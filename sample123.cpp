#include <iostream>
using namespace std;

int main() {
	    int n,q;
	    cin >> n >> q;
	    int arr[n];
		int x=1;
	    for(int i=0; i<n; i++){
	        
	        cin >> arr[i];
	        // if(x%2==1){
	        //     arr[i] = arr[i] + 1;
	        // }
	        // else{
	        //     arr[i] = arr[i] - 1;
	        // }
	        // x = x + 1;
	        
	    }
		int l=1;
	    for(int j=0; j<q; j++){
	        int a,b;
	        cin >> a >> b;
	        for(int j=(a+1); j<(b+1); j++){
	            if(l%2==1){
	            arr[j] = arr[j] + 1;
	        }
	        else{
	            arr[j] = arr[j] - 1;
	        }
	        l = l + 1;
	        }
	    }
	    int sum = 0;
	    for(int p=0; p<n; p++){
	        sum += arr[p];
	    }
	    cout << sum << endl;

	return 0;
}

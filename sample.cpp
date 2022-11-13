#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t!=0){
	    int n, count=0;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    int cou[n];
	   for(int j=0; j<n; j++){
	       count = 0;
	       for(int k=0; k<n; k++){
	           if(arr[j]==arr[k])
	               count++;
	       }
	       cou[j] = count;
	   }
	   int max=0;
	   for(int p=0; p<n; p++){
	    //    if(cou[p]>max)
	    //    max = cou[p];
        cout << cou[p];
	   }
	//    cout << n-max << endl;
	    t--;
	}
	return 0;
}

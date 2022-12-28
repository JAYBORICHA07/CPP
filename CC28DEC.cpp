// -------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >>y;
	    if(x>(10*y)) {
	        cout << "YES" << endl;    
	    }
	    else  {
	        cout << "NO" << endl;  
	    }
	    
	}
	return 0;
}
// -------------------------------------------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int big = max(a,max(b,c));
	    int total = a+b+c;
	    int rem = total - big;
	    if(rem == big){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
// -------------------------------------------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,sterak=0,maxx=0;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    int brr[n];
	    for(int i=0; i<n; i++){
	        cin >> brr[i];
	    }
	    for(int i=0; i<n; i++){
	        if((arr[i] != 0) && (brr[i] !=0 )){
	            sterak++;
	        }
	        else{
	            if(sterak >= maxx){
	                maxx=sterak;
	            }
	            sterak = 0;
	        }
	    }
	    cout << max(maxx,sterak) << endl;
	    
	}
	return 0;
}
// -------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	   
	   
	   for (int i = 0; i < n; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
    
        bool jay = false;
        int count = 1;
	    for(int i=0; i<n-1; i++){
	        if(arr[i]==arr[i+1]){
	            count++;
	        }
	        else{
	            if(count % 2 == 0){
	                jay = true;
	                count = 1;
	            }
	            else{
	                jay = false;
	                count = 1;
	            }
	            if(jay==false){
	                break;
	            }
	        }
	    }
	    if(jay==true){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	}
	return 0;
}
// -------------------------------------------------------------------------------------------------------

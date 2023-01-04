// ------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a+b==c){
	        cout << "YES" <<endl;
	    }
	    else{
	        cout. << "NO" <<endl;
	    }
	}
	return 0;
}
// ------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    for(int i=2; i<100; i++){
	        if(a%i != 0 && b%i!=0 && c%i!=0){
	            cout << i << endl;
	            break;
	        }
	    }
	}
	return 0;
}
// ------------------------------------------------------------------------------------------------------
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << __gcd(m,n) << endl;
        }
	return 0;
}
// ------------------------------------------------------------------------------------------------------

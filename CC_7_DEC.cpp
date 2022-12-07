// ------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(x>y){
	        cout << "LOSS" << endl;
	    }
	    else if(x<y){
	        cout << "PROFIT" << endl;
	    }
	    else
	        cout << "NEUTRAL" << endl;
	}
	return 0;
}
// ------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,c;
	    cin >> a >> c;
	    int ans = (a+c)/2;
	    if((a+c)%2==0){
	        cout << ans << endl;
	    }
	    else
	    cout << "-1" << endl;
	}
	return 0;
}
// ------------------------------------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int i;
	    i = pow(2,x);
	    int p = i;
	    int j=0;
	    while(n>0){
	        j = j + i/2;
	        i = i/2;
	        n--;
	    }
	    cout << p-j << endl;
	}
	return 0;
}
// ------------------------------------------------------------------------------------------------

// -----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
        if(a%2 == 0 && b%2 == 1 && b==1)
                cout << "No\n";
        else if(a%2 == 1 && b%2 == 0 && a==1)
                cout << "No\n";
        else if(a%2 == 1 && b%2 == 1)
            cout << "No\n";
        else
            cout<<"YES"<<endl;
	}
	return 0;
}
// -----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    if(a==p && b==q)
	        cout<<"0"<<endl;
	    else if(((a+b)%2 == 0 && (p+q)%2 == 0) || ((a+b)%2 != 0 && (p+q)%2 != 0))
	        cout<<"2"<<endl;
	    else
	        cout<<"1"<<endl;
	        
	}
	return 0;
}
// -----------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[26];
	    for(int i=0;i<25;i++){
	        a[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        for(int j=0;j<s.size();j++){
	            a[s[j]-97]++;
	        }
	    }
	    int min=a[2]/2;
	    if(min>a[14])min=a[14];
	    if(min>a[3])min=a[3];
	    if(min>(a[4]/2))min=a[4]/2;
	    if(min>a[7])min=a[7];
	    if(min>a[5])min=a[5];
	    cout<<min<<endl;
	    
	}
	return 0;
}
// -----------------------------------------------------------------------------------------------

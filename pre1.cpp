// ----------------------------------------------------------------------------------------
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
// ----------------------------------------------------------------------------------------
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,u,d;
	    cin>>n>>u>>d;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	}
	int r=0;
	int c=1;
	for(int i=0;i<n-1;i++){
	    if(arr[i+1]==arr[i])
	        r++;
	   else if(arr[i+1]>arr[i] && arr[i+1]-arr[i]<=u)
	        r++;
	   else if(arr[i+1]<arr[i] && arr[i]-arr[i+1]<=d)
	        r++;
	    else if(arr[i+1]<arr[i] && arr[i]-arr[i+1]>d && c){
	        r++;
	        c--;
	    }
	    else
	        break;
	}
	cout<<r+1<<endl;
	}

	return 0;
}
// ----------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {

     int t;
     cin>>t;
     while(t--){
         int n, m,k;
         cin>>n>>m>>k;
         
         int ignored[m];
         int tracked[k];
         int presence[n+1]={0};
         for(int i=0;i<m;i++){
             cin>>ignored[i];
             presence[ignored[i]]++;
             
         }
         for(int i=0;i<k;i++){
             cin>>tracked[i];
             presence[tracked[i]]++;   
         }
          int both=0;
         int none=0;
          for(int i=1;i<=n;i++){
            if(presence[i]==2){
                //cout<<"presence"<<i<<" ";
                both++;
            }
            if(presence[i]==0){
                none++;
            }   
         }
         cout<< both<<" "<<none<<endl;  
     }
	return 0;
}
// ----------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {

     int t;
     cin>>t;
     while(t--){
         int n, m,k;
         cin>>n>>m>>k;
         
         int ignored[m];
         int tracked[k];
         int presence[n+1]={0};
         for(int i=0;i<m;i++){
             cin>>ignored[i];
             presence[ignored[i]]++;
             
         }
         for(int i=0;i<k;i++){
             cin>>tracked[i];
             presence[tracked[i]]++;   
         }
          int both=0;
         int none=0;
          for(int i=1;i<=n;i++){
            if(presence[i]==2){
                //cout<<"presence"<<i<<" ";
                both++;
            }
            if(presence[i]==0){
                none++;
            }   
         }
         cout<< both<<" "<<none<<endl;  
     }
	return 0;
}
// ----------------------------------------------------------------------------------------

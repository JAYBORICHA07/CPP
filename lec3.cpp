#include<iostream>
using namespace std;

int main(){
    // IF ELSE PRACTISE
    char ch;
    cin>> ch;
    if(ch>='a' && ch<='z'){
        cout<<"lower case"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"uppercase"<<endl;
    }
    else if(ch>=0 && ch<=9){
        cout<<"number"<<endl;
    }
    else
        cout<<"Special Charecter"<<endl; 
}

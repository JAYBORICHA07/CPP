#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    int count=1;
    /*
    here we want to print the pattern like below
    1 2 3
    4 5 6
    7 8 9
    so here we can not derive any relation between any rows and colums but waht we can
    see here is that in pattern there is nothing but printing of simple sequence so
    we take a variable and will keep incrising it value and will print that variable.
    */
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout<< endl;
        i++;
    }
}
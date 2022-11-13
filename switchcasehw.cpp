#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, H, F, Tw, Te;
    cin >> a;
    switch (a/a)
    {
    case 1: H = a/100;
        a = a % 100;
        cout << H << "  Hundred rupee notes" << endl;
    case 2: F = a/50;
        a = a % 50;
        cout << F << "  Fifty rupee notes" << endl;
    case 3: Tw = a/20;
        a = a % 20;
        cout << Tw << "  Twenty rupee notes" << endl;
    case 4: Te = a/10;
        a = a % 10;
        cout << Te << "  Ten rupee notes" << endl;
    default:
        break;
    }
}
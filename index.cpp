#include <bits/stdc++.h>
using namespace std;

int main(){
    int X;
    float y ,z;
    cin >> X;
    cin >> y;
    if( X %5==0 ){
        z = y - X - 0.50;
        cout << z;
    }else {
        cout << y;
    }
    return 0;
}
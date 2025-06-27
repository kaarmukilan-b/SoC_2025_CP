#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[t];
    int b[t];
    for (int i=0; i < t; i++){
        cin >> a[i] >> b[i];
    }
    for (int i=0; i< t; i++){
        if (((2*a[i]-b[i])>=0) && ((2*b[i]-a[i])>=0)){
            if ((((2*a[i]-b[i])%3) == 0) && (((2*b[i]-a[i])%3) == 0)){
            cout << " YES ";
            }
            else cout << " NO ";
        }
        else cout << " NO ";
    }
}


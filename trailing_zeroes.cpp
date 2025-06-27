#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0;
    int result =0;
    while(true){
        if( n/5 == 0) break;
        else {
            result += n/5;
            n = n/5;
        }
    }
    cout << result;
}
#include <bits/stdc++.h>
//#include <math.h>

using namespace std;

int main(){
    int a;
    long long out = 1;
    const long long mod = 1e9 +7 ; // 1000000007
    cin >> a;
    for(int i = 0; i < a; i++){
        out *= 2;
        out  %= (mod);
    }
    cout << out << endl;
}
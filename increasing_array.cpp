#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long array[n];
    for (int i=0;i<n; i++){
        cin>> array[i];
    }
    long long ref,result = 0;
    ref = array[0];
    for(int i=0;i<n;i++){
        if ((ref - array[i]) <= 0){
            ref = array[i];
        }
        else result += (ref - array[i]);
    }
    cout << result;
}
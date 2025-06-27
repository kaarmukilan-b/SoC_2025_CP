#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    long long result[n]={0};
    long row[n] ;
    long column[n];
    for (long i=0; i<n; i++){
        cin >> row[i] >> column[i];
    }
    for (long i=0; i<n; i++){
        if (row[i] < column[i]){
            if (column[i]%2 == 1){
                result[i] = ((column[i])*(column[i]))+1-row[i];
            }
            else result[i] = ((column[i]-1)*(column[i]-1))+row[i];
        }
        else {
            if (row[i]%2 == 1){
                result[i] = ((row[i]-1)*(row[i]-1))+column[i];
            }
            else result[i] = ((row[i])*(row[i]))+1-column[i];
        }
    }
    for (long i=0; i<n; i++){
        cout << result[i] << " ";
    }
}
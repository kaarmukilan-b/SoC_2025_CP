#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long result = 0;
    long input_length, current_length = 0;
    cin >> n;
    long length[n];
    for (int i=0; i < n ; i++){
        cin >> length[i];
    }
    sort (length, length + n);
    current_length = length[n/2];
    for (int i=0; i < n ; i++){
        if (current_length > length[i]) result += (current_length - length[i]);
        else result -= (current_length - length[i]);
    }
    cout << result;
}
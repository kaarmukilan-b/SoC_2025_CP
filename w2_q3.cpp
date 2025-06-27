#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long x,y,z,r1 = 0,r2 = 0,r3 = 0,o1,o2,o3;
    cin >> n >> x;
    long array[n];
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    unordered_map <long,vector <int>> hasher;
    for (int i=0; i<n; i++){
        hasher[array[i]].push_back(i);
    }
    sort(array, array+n);
    for (int i=0; i<n-2; i++){
        y = x-array[i];
        if(r1 != 0) break;
        for(int j=i+1;j<n-1;j++){
            z = y - array[j];
            if(r1 != 0) break;
            for (int k=j+1; k<n;k++){
                if (z == array[k]){
                    r1 = array[i];
                    r2 = array[j];
                    r3 = array[k];
                    break;
                }
            }
        }
    }
    if(hasher[r1].size() >2){
        o1 = hasher[r1][2];
        o2 = hasher[r1][1];
        o3 = hasher[r1][0];
    }
    if(hasher[r1].size() >1){
        o1 = hasher[r1][1];
        o2 = hasher[r1][0];
        o3 = hasher[r3][0];
    }
    if(hasher[r2].size() >1){
        o1 = hasher[r1][0];
        o2 = hasher[r2][1];
        o3 = hasher[r2][0];
    }
    o1 = hasher[r1][0];
    o2 = hasher[r2][0];
    o3 = hasher[r3][0];
    cout << o1 +1 << " "  << o2 +1  <<  " " << o3 +1;
}
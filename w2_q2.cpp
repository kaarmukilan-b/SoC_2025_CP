#include<bits/stdc++.h>
using namespace std;

vector <int> solve(int x[], int n, int c){
    vector <int> result;
    unordered_map <int,vector <int> > myset;
    for(int i = 0; i< n ; i++){
        myset[x[i]].push_back(i);    
    }
    for (int i = 0; i< n; i++){
        if(myset.find( c- x[i]) != myset.end()){
            if (c - x[i] != x[i]){
                result.push_back(myset[c- x[i]][0]+1);
                result.push_back(myset[x[i]][0]+1);
                return result;
            }
            else {
                if(myset[x[i]].size() > 1){
                    result.push_back(myset[x[i]][0]+1);
                    result.push_back(myset[x[i]][1]+1);
                    return result;
                }
                else {
                    continue;
                } 
            }  
        }
        return result;
    }    
}
int main(){
    int n,c,x,p,q;
    cin >> n >> c ;
    int array[n];
    vector <int> result_main;
    for (int i = 0; i< n; i++){
        cin >> x;
        array[i] = x;
    }
    result_main = solve(array , n , c);
    if( result_main.size() == 0){
        cout << "IMPOSSIBLE" ;
    }
    else {
        p = result_main[1];
        q = result_main[0];
        cout << p << " " << q ;
    }
}
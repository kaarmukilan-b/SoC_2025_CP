#include<bits/stdc++.h>
using namespace std;
// completed properly, cses accepted 
int main(){
    int n,k=0,p=0,best=0;
    cin >> n;
    double x;
    unordered_map <double,int> list;
    for (int i=0; i<n ; i++){
        cin >> x;
        p = list[x]; //i+1
        if(k == 0 ){
            if (p == 0) {
                list[x] = i+1;
               if(i == n-1){
                   best = max(best,i-k+1);
                }
            }
            else {
                list[x] = i+1;
                best = i;
                k = p;
            }
        }
        else {
            if (p < k+1) {
                list[x] = i+1;
                if(i == n-1){
                   best = max(best,i-k+1);
                }
            }
            else {
                list[x] = i+1;
                best = max(best,i-k);
                k = p;
            }
        } 
    }
    cout << best;
}

// int solve(vector<long>list ,int n){
//     unordered_map <long , vector<int>> mylist;
//     int k=-1,p=0,q;
//    // mylist[list[0]].push_back(0);
//     for(int i=0; i<n; i++){  
//         q = mylist[list[i]].size() - 1;
//         if (q>=0) { 
//             k = max(0,k);
//             if(mylist[list[i]][q] < k) mylist[list[i]].push_back(i);
//             else {
//                 mylist[list[i]].push_back(i);
//                 p = max(p, i-k);
//                 k = i;
//             }
//         }
//         else  {
//             mylist[list[i]].push_back(i);
//             p = max(p, i-k);
//         }
//         }
//     return p;
//     }        
 
 
// int main(){
//     int n0,out;
//     long d;
//     cin >> n0;
//     vector<long> list_in;
//     for(int i=0 ; i< n0; i++){
//         cin >> d;
//         list_in.push_back(d); 
//     }
//     out = solve(list_in , n0);
//     cout << out;
// }
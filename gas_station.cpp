#include<bits/stdc++.h>
using namespace std;

int main(){
    
}

// leetcode submission  - all testcase passed :)


// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int n = gas.size();
//         int tot=0, net=0 ;
//         for (int i=0; i<n; i++){
//             tot += gas[i] - cost[i];
//         }
//         if (tot < 0) return -1 ;
//         else { 
//             int k=0,p=0,r=0;
//             for (int i=n-1; i>=0; i--){
//                // if(gas[i] - cost[i]<0) continue;
//                // else {
//                     k=i+p;
//                     r=i;
//                     net += gas[i] - cost[i];
//                     p++;
//                     if (net < 0) continue;
//                     if (k >= n-1) k -= n-1;
//                     else k++;
//                     while(i != k){
//                         net += gas[k] - cost[k];
//                         p++;
//                         if (net < 0) break;
//                         else {
//                             if (k >= n-1) k -= n-1;
//                             else k++;
//                         }
//                     }
//                     if (net < 0) continue;
//                     else break;
//               //  }
//             }
//             return r;
//         }
//     }
// };
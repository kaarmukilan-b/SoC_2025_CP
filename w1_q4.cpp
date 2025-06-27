#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, x;
    cin >> n >> x;
    int weights[n] ;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    sort(weights, weights + n);
    int result = 0;
    int left = 0, right = n - 1;
    while(left<= right) {
    if (weights[left]+ weights[right] <= x) {
        result++;
        left++;
        right--;
    }
    else {
        result++;
        right--;
    }
    }  
    cout << result << endl;
}

// int input(vector <int> stude, int n) {
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         stude.push_back(x);
//     }
//     return 0;
// }
// int solve()

// int main(){
//     int n,x;
//     cin >> n >> x ;
//     vector <int> stud ;

// }




// int solve(int weight[], int n, int x){
//     int k, result;
//     result += weight[x];
//     result += weight[x-1];
//     weight[1] = max(0,(weight[1]-weight[x-1]));
    



// }

// int main(){
//     int n,x;
//     cin >> n >> x ;
//     int weight[x+1] = {0};
//     for( int i = 0; i < n; i++){
//         int p;
//         cin >> p;
//         weight[p] += 1;
//     }

// }
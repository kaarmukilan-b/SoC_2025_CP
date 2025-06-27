#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long x ;
    cin >> x;
        cout << x ;  
    while (x != 1){
        if (x % 2 == 0) {
            x /= 2;
        } 
        else {
            x = (3 * x + 1);
        }
        cout << " " << x;
    }
    cout << endl;
}

//thumbaad

// in function format instead of direct code (below) 

// #include <bits/stdc++.h>
// using namespace std;

//     string solve(int x) {
//         string result = to_string(x);
//         while (x != 1) {
//             if (x % 2 == 0) {
//                 x /= 2;
//             } else {
//                 x = (3 * x + 1);
//             }
//             result += " " + to_string(x);
//         }
//         return result;
//     }   

// int main(){
//     int x ;
//     cin >> x;
//     string y = solve(x);
//     cout << y << "\n" ;
// }
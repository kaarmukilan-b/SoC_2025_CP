#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,r ;
    cin >> n ;
    int Array[n] = {0};
    for(int i = 1; i < n; i++) {
        cin >> r;
        Array[(r-1)] = 1; 
    }
    for(int i = 0; i < n; i++) {
        if(Array[i] == 0) {
           cout<< (i+1) << endl; 
            break;
        }
    }
   //no. which are present will have corresponding bit as 1 , so at end only one will be zero
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char x,type_best,type_prev;
    type_prev = '1';
    int count = 0,best = 0;
    while (cin >> x){
        if (x == '\n') {
            break;
        }
        if(type_prev == x){
            count += 1;
        }
        else {
            if (count > best){
                best = count;
                type_best = type_prev;
            }
                type_prev = x;
                count = 1;
        }
    }
    if (count > best) {
        best = count;
        type_best = type_prev;
    }
    cout << best << endl ;
}
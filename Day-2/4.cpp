// Print the nearest integer value of square root of a given number
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num; cin >> num;
    double can_ans = sqrt(num);

    double floor_val = floor(can_ans);
    double ceil_val = ceil(can_ans);

    double diff1, diff2;

    diff1 = abs(floor_val - can_ans);
    diff2 = abs(ceil_val - can_ans);

    if(diff1 > diff2){
        cout << ceil_val << '\n';
        return 0;
    }
    if(diff2 > diff1){
        cout << floor_val << '\n';
    }

    return 0;
}
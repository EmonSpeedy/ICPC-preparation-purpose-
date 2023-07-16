#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if(n < 10){
        cout << n << '\n';
        return 0;
    }
    else{
        int last_digit = n % 10;
        cout << last_digit+1 << last_digit+1 <<'\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int large;
    if(n1 > n2){
        large = n1;
    }
    else{
        large = n2;
    }
    cout << large <<'\n';
    return 0;
}
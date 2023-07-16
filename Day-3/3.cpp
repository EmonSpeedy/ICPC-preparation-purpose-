#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int largest;
    if(n1 > n2 and n1 > n3){
        largest = n1;
    }
    else if(n2 > n1 and n2 > n3){
        largest = n2;
    }
    else{
        largest = n3;
    }
    cout << largest << '\n';
    return 0;
}
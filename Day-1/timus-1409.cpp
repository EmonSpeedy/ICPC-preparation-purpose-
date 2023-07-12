#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int total_cans = (n1 + n2) - 1; 
    cout << total_cans - n1 << " " << total_cans - n2 << '\n';

    return 0;
}
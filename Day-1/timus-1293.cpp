#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int area = a * b;
    int co_ans = n * area;
    cout << co_ans * 2 << '\n';

    return 0;
}
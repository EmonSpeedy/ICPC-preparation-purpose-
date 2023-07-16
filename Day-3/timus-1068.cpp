#include <bits/stdc++.h>
using namespace std;
int main() {
    // UNDONE
    int n, ans; cin >> n;
    if(n > 0){
        ans = (n*(n+1))/2;
    }
    else if(n < 0){
        ans = 1 - (n*(n-1))/2;
    }
    else{
        cout << 1<<'\n';
        return 0;
    }
    cout << ans << '\n';

    return 0;
}
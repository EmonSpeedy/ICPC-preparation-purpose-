// if 3 vertex of a triangle are given then output its area
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    double a1 = x1 * (y2 - y3);
    double a2 = x2 * (y3 - y1);
    double a3 = x3 * (y1 - y2);

    double ans = 0.5 * (a1 + a2 + a3);
    cout << ans << '\n';
    

    return 0;
}
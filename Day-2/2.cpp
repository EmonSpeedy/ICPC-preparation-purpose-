// If 3 lengths of a triangle are given then to get the area as output
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    double s = (a+b+c)/2.0;
 
    double var = s * (s-a) * (s-b) * (s-c);
    double area = sqrt(var);

    cout << area << '\n';

    return 0;
}
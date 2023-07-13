// If radius is given then output it's perimeter
#include <bits/stdc++.h>
using namespace std;

int main(){
    double radius; cin >> radius;
    double pi = acos(-1);
    double perimeter = 2 * pi * radius;
    cout << perimeter << '\n';

    return 0;
}
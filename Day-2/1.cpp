// Distance between two co ordinates
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, b1; cin >> a1 >> b1;
    int a2, b2; cin >> a2 >> b2;
    int var = pow((a1 - a2), 2) + pow((b1 - b2), 2);
    cout << var <<'\n';
    double distance = sqrt(var);
    cout << distance << '\n';
    return 0;
}
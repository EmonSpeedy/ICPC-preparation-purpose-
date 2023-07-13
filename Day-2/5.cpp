// If 3 lengths of a triangle are given then output the angles
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double pi = acos(-1);

    double can = pow(b,2) + pow(c,2) - pow(a,2);
    double can_ans = can/(2*b*c);
    double A = acos(can_ans);
    A = (A*180)/pi;
    
    double can2 = pow(a,2) + pow(c,2) - pow(b,2);
    double can2_ans = can2/(2*a*c);
    double B = acos(can2_ans);
    B = (B*180)/pi;

    double can3 = pow(a,2) + pow(b,2) - pow(c,2);
    double can3_ans = can3/(2*a*b);
    double C = acos(can3_ans);
    C = (C*180)/pi;

    cout << A <<" "<< B <<" "<< C <<'\n';

    return 0;
}
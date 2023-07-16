#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int large, medium, small;
    if(n1 > n2 and n1 > n3){
        large = n1;
    }
    else if(n2 > n1 and n2 > n3){
        large = n2;
    }
    else if(n3 > n1 and n3 > n2){
        large = n3;
    }
    if((n1 > n2 and n1 < n3) or (n1 > n3 and n1 < n2)){
        medium = n1;
    }
    else if((n2 > n1 and n2 < n3) or (n2 > n3 and n2 < n1)){
        medium = n2;
    }
    else if((n3 > n1 and n3 < n2) or (n3 > n2 and n3 < n1)){
        medium = n3;
    }
    if(n1 < n2 and n1 < n3){
        small = n1;
    }
    else if(n2 < n1 and n2 < n3){
        small = n2;
    }
    else if(n3 < n1 and n3 < n2){
        small = n3;
    }

    cout << small<<" "<< medium<<" "<< large <<'\n';

    return 0;
}
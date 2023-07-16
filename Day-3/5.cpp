#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if (x > 0 and y > 0){
        cout << "first quadrent\n";
    }
    else if (x < 0 and y > 0){
        cout << "second quadrent\n";
    }
    else if (x < 0 and y < 0){
        cout << "third quadrent\n";
    }
    else{
        cout << "fourth quadrent\n";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    bool b = true;
    int x, y, z;
    cin >> x >> y >> z;
    if(x > y || x > z || y > z) b = false;
    cout << b;
    return 0;
}



#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%100!=0 && n%4==0) cout << "true";
    else cout << "false";
    return 0;
}


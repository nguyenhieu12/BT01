#include <iostream>

using namespace std;

int main(){
    string f0 = "a", f1 = "b", fn;
    cout << f0 << " " << f1 << " ";
    for(int i = 2;i <= 10;i++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        cout << fn << " ";
    }
    return 0;
}

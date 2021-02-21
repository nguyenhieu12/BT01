#include <iostream>

using namespace std;

int main(){
    for(;;){
        int x;
        cin >> x;
        if(x==-1){
            cout << "bye";
            return 0;
        }
        else if(x>0 && x%5==0) cout << x%5;
        else cout << "-1";
    }
}



#include <iostream>
#include <string>
using namespace std;

void pattern(int n){
    // string s = "* ";
    for(int a=n ; a>0 ; a--){
        for(int b=1 ; b<=a ; b++){
            cout << b;
        }
        cout << endl;
    }
}

int main(){
    pattern(6);
}

// 12345
// 1234
// 123
// 12
// 1
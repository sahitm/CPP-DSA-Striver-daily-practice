#include <iostream>
#include <string>
using namespace std;

void pattern(int n){
    string s = "* ";
    for(int a=n ; a>0 ; a--){
        for(int b=0 ; b<a ; b++){
            cout << s;
        }
        cout << endl;
    }
}

int main(){
    pattern(6);
}

// * * * * *
// * * * * 
// * * * 
// * *  
// * 
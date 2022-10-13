#include <iostream>
#include <string>
using namespace std;

void pattern(int n){
    string s = "*";
    for(int a=0;a<n;a++){
        cout<< s <<'\n';
        s+="*";
    }
}

int main(){
    pattern(5);
}
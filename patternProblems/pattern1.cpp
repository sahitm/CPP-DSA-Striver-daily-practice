#include <iostream>
using namespace std;

void pattern(int n){
    char s = '*';
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cout<<s<<' ';
        }
        cout<<endl;
    }
}

int main(){
    pattern(5);
}
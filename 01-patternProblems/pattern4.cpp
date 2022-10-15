#include <iostream>
using namespace std;

void pattern(int n){
    
    for(int a=1;a<=n;a++){
        for(int b=0;b<a;b++){
            cout<<a<<" ";
        } 
        cout<<'\n';
    }
}

int main(){
    pattern(5);
}

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
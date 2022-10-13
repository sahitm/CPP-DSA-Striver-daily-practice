#include <iostream>
using namespace std;

void pattern(int n){
    
    for(int a=0;a<n;a++){
        for(int b=1;b<=a+1;b++){
            cout<<b<<" ";
        } 
        cout<<'\n';
    }
}

int main(){
    pattern(5);
}

// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
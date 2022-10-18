#include<bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5

void fibbonaci(int n){

    int last = 1;
    int secondLast = 0;

    if(n==0){
        cout<<0<<"\n";
    }else{
        cout<<0<<"\n"<<1<<"\n";
    
        int curr;
        for(int i=2;i<=n;i++){
            curr = last + secondLast;
            cout<<curr<<"\n";
            secondLast = last;
            last = curr;
            
        }
    }
    
}

int main(){

    fibbonaci(5);
}
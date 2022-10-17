#include<iostream>
using namespace std;

int print(int n,int sum){
    if(n<0){
        cout<<sum;
        return 0;
    }
    print(n-1,sum+n);
}

int main(){
    print(10,0);
}
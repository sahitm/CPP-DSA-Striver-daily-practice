#include<iostream>
using namespace std;

int print(int n){
    if(n>0){
        print(n-1);
        cout<<n<<" ";
    }
}

int main(){
    print(10);
}
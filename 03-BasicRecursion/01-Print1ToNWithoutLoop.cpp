#include<iostream>
using namespace std;

int print(int n){
    if(n>0){
        cout<<n<<endl;
        return print(n-1);
    }
    return 0;
}

int main(){
    print(50);
}
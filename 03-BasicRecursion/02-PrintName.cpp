#include<iostream>
using namespace std;

int print(int n){
    if(n>0){
        cout<<"GFG"<<'\n';
        return print(n-1);
    }else{
        return 0;
    }

}

int main(){
    print(10);
}
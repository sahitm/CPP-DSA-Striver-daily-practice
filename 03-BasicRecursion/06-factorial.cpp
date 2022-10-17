#include<iostream>
using namespace std;

int print(int n){
    if(n == 1){
        return 1;
    }else{
        return n * print(n-1);
    }
}

int main(){

    int n;
    cout<<"enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout<<print(i)<<"\n";
    }
    
}
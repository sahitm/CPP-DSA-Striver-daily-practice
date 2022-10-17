// 1 2 3 5 7 11 13 17 19 …

#include<iostream>
using namespace std;

bool primeOrNot(int n){

    for (int i = 2; i < n; i++)
    {
        /* code */
        if(n%i == 0){
            return false;
        }
    }
    return true;
    
}

int main(){
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    bool isPrime = primeOrNot(number);
    if(isPrime && number>0){
        cout<<"This is a prime number";
    }else{
        cout<<"This is a not prime number";
    }
}
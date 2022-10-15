// Given an integer N , write program to count number of digits in N.

#include<bits/stdc++.h>
using namespace std;

int functionLength(int n){

    string s = to_string(n);
    int length = s.length();
    return length;
}

int main(){
    cout<<"The length of the number is : "<<functionLength(123456789);
}
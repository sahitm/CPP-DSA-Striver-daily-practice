// Given a number N reverse the number and print it. [leetcode]
#include<bits/stdc++.h>
using namespace std;

int printReverse(long long x){
    string s = to_string(x);
    string reverse = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        reverse = s[i]+reverse;
    }

    long long stingtoIntger = stoll(reverse) ;

    if(x<0){
        return (stingtoIntger<INT_MIN || stingtoIntger>INT_MAX) ? 0 : -stingtoIntger;
    }else{
        return (stingtoIntger<INT_MIN || stingtoIntger>INT_MAX) ? 0 : stingtoIntger;
    }
    
}

int main(){
    cout<<"The reverse of the number is :"<<printReverse(1534236469);
}
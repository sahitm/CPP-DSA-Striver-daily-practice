#include<bits/stdc++.h>
using namespace std;

bool printReverse(long long x){
    string s = to_string(x);
    string reverse = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        reverse = s[i]+reverse;
    }

    long long reverseIntger = stoll(reverse) ;

    if(reverseIntger == x){
        return true;
    }else{
        return false;
    }
    
    
}

int main(){
    cout<<"is palindrome:"<<printReverse(10);
}

// alternative

//  bool isPalindrome(int x) {
//         string rev = to_string(x);
//         reverse(rev.begin(), rev.end());
//         return to_string(x) == rev;
//     }
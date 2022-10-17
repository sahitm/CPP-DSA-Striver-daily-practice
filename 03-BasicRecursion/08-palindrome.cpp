#include<bits/stdc++.h>
using namespace std;

bool reverse_copy(string str){

    int start = 0 , end = str.length()-1;

    while(start<end){
        if(str[start] != str[end]){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;
    
}

int main(){
   string a = "ABA";
   bool isPalindrome = reverse_copy(a);
   if(isPalindrome){
    cout<<"is palindrome";
   }else{
    cout<<"not palindrome";
   }

}
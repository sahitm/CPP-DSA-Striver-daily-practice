#include<bits/stdc++.h>
using namespace std;

string armstrong(int N){
    
    int len = to_string(N).length();
    int sum = 0;
    int num = N;

    for (int i = 0; i < len; i++){
        /* code */
        int digit = N%10;
        sum += pow(digit,len);
        N = N/10;

    }

    if(sum == num){
        return "yes";
    }else{
        return "no";
    }   

}

int main(){
    cout<<armstrong(371);
}

//  Examples- 0, 1, 153, 370, 371, 407, and 1634
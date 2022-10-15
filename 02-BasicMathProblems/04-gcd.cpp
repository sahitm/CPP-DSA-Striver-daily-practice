#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int ans ;
    for (int i = 1; i <= min(a,b); i++)
    {
        /* code */
        if(a%i == 0 && b%i == 0){
            ans = i;
        }
    }
    return ans; 
}

int main(){
    cout<<"the gcd is: "<<gcd(6,9);
}
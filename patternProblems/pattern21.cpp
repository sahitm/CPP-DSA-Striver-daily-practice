

#include<iostream>
using namespace std;

void pattern(int n){

    int i = 1;
    while (i<=n)
    {
        /* code */
        int j = 1;
        while (j<=n)
        {
            /* code */
            if(i==1||i==n||j==1||j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
            j++;
        }
        
        i++;
        cout<<'\n';
    }
          
}

int main(){
    pattern(4);
}

// ****
// *  *
// *  *
// ****
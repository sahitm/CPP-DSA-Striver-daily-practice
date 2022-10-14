#include<iostream>
using namespace std;

void pattern(int n){
    int i = 0;
    while (i<n)
    {
        /* code */
        int k = n-i;
        while (k>0)
        {
            /* code */
            cout<<"*";
            k--;
        }

        int l = 0;
        while(l<2*i){
            cout<<' ';
            l++;
        }

        int m = n-i;
        while (m>0)
        {
            /* code */
            cout<<"*";
            m--;
        }
        
        cout<<"\n";
        i++;
    }

    int z = 1, x = n;
    while (z<=n)
    {
        /* code */
        int k = 0;
        while(k<z){
            cout<<'*';
            k++;
        }

        int l = 1;
        while (l<=2*x-2)
        {
            /* code */
            cout<<" ";
            l++;
        }
        x--;

        int m = 0;
        while(m<z){
            cout<<'*';
            m++;
        }
        
        z++;
        cout<<'\n';
    }
    
    
}

int main(){
    pattern(5);
}


// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
#include <iostream>
using namespace std;

void pattern(int n){

    
    char ch = 'A';
    int i = 1;
    while (i<n+1)
    {
        /* code */
        int k = 0;
        while (k<n-i)
        {
            /* code */
            cout<<" ";
            k++;
        }

        int r = 1;
        while (r<=i)
        {
            /* code */
            cout<<ch++;
            r++;
        }
        ch = 'A';

        char z = 64 + i-1;
        while (z>64)
        {
            /* code */
            cout<<z;
            z--;
        }
        
        
        cout<<'\n';
        i++;
    }
                

}

int main(){
    pattern(5);
}

//    A
//   ABA
//  ABCBA
// ABCDCBA

//    A
//   ABA
//  ABCBA
// ABCDCBA
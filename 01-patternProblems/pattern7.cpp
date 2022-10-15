#include <iostream>
#include <string>
using namespace std;

void pattern(int n){
    int i = 0, k = 0 , j = 0;
    while (i<n)
    {
        
        while (k<n-i-1)
        {
            /* code */
            cout<<' ';
            k++;
        }
        k=0;

        while (j<2*i+1)
        {
            /* code */
            cout<<"*";
            j++;
        }
        j=0;
        
        cout<<endl;
        i++;
    }
    
}

int main(){
    pattern(5);
}

//    *
//   ***
//  *****
// *******
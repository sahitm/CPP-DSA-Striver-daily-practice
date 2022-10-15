#include <iostream>
#include <string>
using namespace std;

void pattern(int n){
    int i = n, k = 0 , j = 0;
    while (i>0)
    {
        while (k<n-i)
        {
            /* code */
            cout<<" ";
            k++;
        }
        k=0;

        while(j<i*2-1){
            cout<<'*';
            j++;
        }
        j=0;
        
        cout<<endl;
        i--;
    }
    
}

int main(){
    pattern(5);
}


// *********
//  *******
//   *****
//    ***
//     *

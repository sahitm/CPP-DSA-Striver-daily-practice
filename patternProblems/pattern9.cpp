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

    int l = n, m = 0 , p = 0;
    while (l>0)
    {
        while (m<n-l)
        {
            /* code */
            cout<<" ";
            m++;
        }
        m=0;

        while(p<l*2-1){
            cout<<'*';
            p++;
        }
        p=0;
        
        cout<<endl;
        l--;
    }


}

int main(){
    pattern(5);
}

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *


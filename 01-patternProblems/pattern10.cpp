#include <iostream>
#include <string>
using namespace std;

void pattern(int n){

    int i = 0, k = 0 , j = 0;
    while (i<n)
    {

        while (j<i)
        {
            /* code */
            cout<<"* ";
            j++;
        }
        j=0;
        
        cout<<endl;
        i++;
    } 

    int l = n, m = 0 , p = 0;
    while (l>0)
    {

        while(p<l){
            cout<<"* ";
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


// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *


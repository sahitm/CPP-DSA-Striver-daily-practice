#include <iostream>
using namespace std;

void pattern(int n){

    char c = 'A';
    int i = n;
    while (i>0)
    {
        /* code */
        int k = 0;
        while (k<i)
        {
            /* code */
            cout<<c++;
            k++;
        }
        c = 'A';
        
        cout<<"\n";
        i--;
    }
    
            

}

int main(){
    pattern(5);
}
#include <iostream>
using namespace std;

void pattern(int n){

    char c = 'A';
    int i = 1;
    while (i<=n)
    {
        /* code */
        int k = 0;
        while (k<i)
        {
            /* code */
            cout<<c;
            k++;
        }
        c++;
        cout<<"\n";
        i++;
    }
    
            

}

int main(){
    pattern(5);
}
#include <iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while (i<n+1)
    {
        int k = 1;
        /* code */
        while (k<=i)
        {
            /* code */
            cout<<k;
            if(k!=i){
                cout<<" ";
            }
            k++;
        }
        k=0;

        int m = n+2;
        while (m>=2*i-2)
        {
            /* code */
            cout<<" "<<" ";
            m--;
        }
        m=n+2;

        int r = i;
        while (r>0)
        {
            /* code */
            cout<<" "<<r;
            r--;
        }
        
        i++;
        cout<<endl;
    }

}

int main(){
    pattern(5);
}


// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

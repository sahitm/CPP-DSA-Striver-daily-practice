#include <iostream>
using namespace std;

void pattern(int n){
    int i=1;
    while (i <= n+1)
    {
        /* code */
        if(i%2){
            int k = 1;
            while (k<i)
            {
                /* code */
                if(k % 2){
                    cout<<0<<" ";
                }else{
                    cout<<1<<" ";
                }
                k++;
            }
            k=1;
        }else{
            int k = 1;
            while (k<i)
            {
                /* code */
                if(k % 2){
                    cout<<1<<" ";
                }else{
                    cout<<0<<" ";
                }
                k++;
            }
            k=1;
        }

        if(i != 1){
             cout<<endl;
        }
        i++;
    }
}

int main(){
    pattern(5);
}



// 1 
// 0 1 
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1
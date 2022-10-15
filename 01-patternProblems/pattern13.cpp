#include <iostream>
using namespace std;

void pattern(int n){

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < i+1; j++)
        {
            /* code */
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
        
    }
            

}

int main(){
    pattern(5);
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
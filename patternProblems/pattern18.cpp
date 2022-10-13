#include <iostream>
using namespace std;

void pattern(int n){

    int i, j;
    for(i=n;i>=1;i--)
    {
    for(j=i;j<=n;j++)
    {
    cout<<char(64+j)<<" ";
    }
    cout<<"\n";
    }
}

int main(){
    pattern(5);
}


// E 
// D E
// C D E
// B C D E
// A B C D E

// E 
// D E
// C D E
// B C D E
// A B C D E

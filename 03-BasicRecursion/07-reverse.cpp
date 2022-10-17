#include<bits/stdc++.h>
using namespace std;

void reverse_copy(int arr[], int start, int end){
    if(start<end){
        swap(arr[start],arr[end]);
        reverse_copy(arr, start+1, end-1);
    }
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    reverse_copy(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}
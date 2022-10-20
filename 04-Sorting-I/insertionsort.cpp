#include<iostream>
using namespace std;

int insertionsort(int array[],int length){

    for (int i = 0; i < length-1; i++){
        /* code */
        for (int j = i+1; j > 0; j--){
            /* code */
            if(array[j]<array[j-1]){
                swap(array[j],array[j-1]);
            }
        }
        
    }
    
}

int main(){
    int arr[] = {7,4,9,3,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}
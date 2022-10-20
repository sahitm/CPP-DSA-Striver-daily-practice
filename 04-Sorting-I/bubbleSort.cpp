#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int array[],int length){

    for (int i = 0; i < length; i++)
    {
        /* code */
        for (int j = i+1; j < length; j++)
        {
            /* code */
            if(array[i]>array[j]){
                swap(array[i],array[j]);
            }
        }
        
    }
    
}

int main(){
    int arr[] = {3,6,5,8,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}
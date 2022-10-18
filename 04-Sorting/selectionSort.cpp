#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    
  for (int i = 0; i < n ; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    swap(arr[min],arr[i]);
  }
        
}

int main(){
    int arr[] = {3,6,5,8,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}
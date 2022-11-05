#include <iostream>
using namespace std;

void displayArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }

    cout<<endl;
}

void RecursiveBubbleSort(int arr[], int length)
{

    if (length == 1)
    {
        return;
    }

    int count = 0;

    for (int i = 0; i < length - 1; i++)
    {
        /* code */
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
    }

    if (count == 0)
    {
        return;
    }

    RecursiveBubbleSort(arr, length - 1);
}

int main()
{
    int array[] = {2, 8, 5, 7, 3, 9, 1};
    int n = sizeof(array) / sizeof(array[0]);
    RecursiveBubbleSort(array, n);
    displayArray(array, n);
}
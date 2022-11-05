#include <iostream>
using namespace std;

void displayArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }

    cout << endl;
}

void RecursiveInsertionSort(int arr[], int length)
{
    if (length <= 1)
    {
        return;
    }

    RecursiveInsertionSort(arr, length - 1);

    int last = arr[length - 1];
    int j = length - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main()
{
    int array[] = {2, 8, 5, 7, 3, 9, 1};
    int n = sizeof(array) / sizeof(array[0]);
    RecursiveInsertionSort(array, n);
    displayArray(array, n);
}
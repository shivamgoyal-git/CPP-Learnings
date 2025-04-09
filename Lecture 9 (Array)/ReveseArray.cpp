#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int revArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "Reverse Array: " << endl;
    printArray(arr, n);
}
int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Given Array:" << endl;
    printArray(arr,9);
    cout << endl
         << endl;
    revArray(arr, 9);
}
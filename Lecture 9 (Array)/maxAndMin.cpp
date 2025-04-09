#include <iostream>
using namespace std;
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647

int maxOf(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum : " << max << endl;
}
int minOf(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum : " << min << endl;
}

int main()
{
    int arr[50];
    int n;
    cin >> n;
    // input of array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minOf(arr,n);
    maxOf(arr,n);
}
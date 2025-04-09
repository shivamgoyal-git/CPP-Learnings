#include <iostream>
using namespace std;

int sumOfElement(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum = " << sum;
}
int main()
{
    int n;
    int arr[100];
    cout << "Enter the no. of Element in Array: ";
    cin >> n;
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumOfElement(arr, n);
}
#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 5, 9, 7, 0, 6, 8, 3, 4, 2};
    int key;
    cout << "Enter the Element to be search: ";
    cin >> key;

    int found = search(arr, 10, key);

    if (found)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is absent";
    }
}
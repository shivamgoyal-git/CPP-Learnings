#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2; ---> not safe for bigger values greater than 2^31-1
        int mid = start + ((end-start)/2);

        if (key == arr[mid])
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int even[6] = {0, 2, 5, 8, 9, 15};
    int odd[5] = {1, 3, 5, 9, 13};
    cout << "Index of 15 is: " << binarySearch(even, 6, 15)<<endl;
    cout << "Index of 1 is: " << binarySearch(odd, 5, 1);
}
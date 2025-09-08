#include <iostream>
using namespace std;

int leftOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        // int mid = (start + end) / 2; ---> not safe for bigger values greater than 2^31-1
        int mid = start + ((end-start)/2);

        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}int RightOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        // int mid = (start + end) / 2; ---> not safe for bigger values greater than 2^31-1
        int mid = start + ((end-start)/2);

        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int even[6] = {0, 2, 5, 5, 5, 15};
    cout << "left Most occurence of key is: " << leftOccurance(even, 6, 5)<<endl;
    cout << "Right Most occurence of key is: " << RightOccurance(even, 6, 5)<<endl;
    return 0;
}
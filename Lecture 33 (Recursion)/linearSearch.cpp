#include<iostream>
using namespace std;

bool LinearSearch(int *arr , int size, int k)
{
    if(size ==0)
    return false;

    if(arr[0] == k)
    return true;

    else
    {
        LinearSearch(arr+1, size-1, k);
    }
    
}


int main()
{
    int array[5] ={1,4,8,9,6};
    int key = 9;
    bool ans = LinearSearch(array, 5, key);
    if(ans)
    {
        cout<<"Present";
    }
    else cout<<"absent";
    return 0;
}
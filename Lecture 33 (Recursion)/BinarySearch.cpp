#include<iostream>
using namespace std;

bool BinarySearch(int *arr , int s, int e, int k)
{
    //base case
    if(s>e) return false;

    int mid = s + (e-s)/2;
    if(arr[mid] == k) return true;

    //recursive relation

    if(arr[mid] > k) BinarySearch(arr, s, mid-1, k);
    else BinarySearch(arr, mid+1, e, k);
}


int main()
{
    int array[5] ={1,4,8,9,14}; //sorted array
    int key = 14;
    bool ans = BinarySearch(array, 0,4, key);
    if(ans)
    {
        cout<<"Present";
    }
    else cout<<"absent";
    return 0;
}
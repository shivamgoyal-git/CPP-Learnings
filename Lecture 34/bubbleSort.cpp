#include <iostream>
using namespace std;
void print(int*arr,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int*arr, int n)
{
    //base case
    if(n==0 || n==1)
    {
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main()
{
    int array[5] = {4,8,3,6,1};
    cout<<"Before Sorting: "<<endl;
    print(array,5);
    bubbleSort(array,5);
    cout<<"After Sorting: "<<endl;

    print(array,5);
    
    return 0;
}
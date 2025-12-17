#include<iostream>
using namespace std;

int ArraySum(int *array, int size)
{
    
    if(size==0) return 0;

    int sum = array[0] + ArraySum(array+1, size-1);
    return sum;
}

int main()
{
    int array[5] = {1,2,3,4,10};
    int ans= ArraySum(array, 5);
    cout<<"sum of array is : "<<ans;
    return 0;
}
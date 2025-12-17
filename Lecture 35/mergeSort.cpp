#include <iostream>
using namespace std;
void printArray(int *arr, int s,int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void merge(int *arr, int s, int e, int mid)
{
  int len1 = mid-s+1;
  int len2 = e-mid;

  int *first = new int [len1];
  int *second = new int [len2];

  //copy values

  int mainArrayIndex =s;
  for(int i=0;  i<len1 ; i++)
  {
    first[i] = arr[mainArrayIndex++];
    
  } 
  mainArrayIndex =mid+1;
  for(int i=0;  i<len2 ; i++)
  {
    second[i] = arr[mainArrayIndex++];
    
  }

  //merge two sorted arrays

  int index1 =0;
  int index2 =0;
  mainArrayIndex =s;

  while(index1<len1 && index2<len2)
  {
    if(first[index1]<second[index2])
    {
      arr[mainArrayIndex++] = first[index1++];
    }
    else
    {
      arr[mainArrayIndex++] = second[index2++];}
  }
  while(index1<len1)
  {
    arr[mainArrayIndex++] = first[index1++];
  } 
  while(index2<len2)
  {
    arr[mainArrayIndex++] = second[index2++];
  }

  delete []first;
  delete []second;


}

void mergeSort(int *arr, int s, int e)
{
    

    //base case
    if(s>=e)
    {
        return;
    }
    int mid = s+((e-s)/2);

    //sort left part
    
    mergeSort(arr,s, mid);
    
    
    //sort right part
    mergeSort(arr,mid+1, e) ;

    //merge
    merge(arr,s,e,mid);
    
    

}
int main()
{

    int arr[7] = {38,27,43,3,9,82,10};
    int n=7;
    mergeSort(arr, 0, n-1);
    //print array
    cout<<"sorted array"<<endl;
    printArray(arr, 0,n-1);
    
    return 0;
}
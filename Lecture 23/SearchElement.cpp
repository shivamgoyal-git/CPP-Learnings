#include <iostream>
using namespace std;

bool isFound(int arr[][4], int target, int n,int m )
{
    for(int i=0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        if(arr[i][j] == target)
        {
            return true;
        }
    }    
}
    return false;
}
int main(){
    

int arr[3][4];
cout<< "Enter the elements"<<endl;

for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        cin>>arr[i][j];
    }
    
}
cout<< "Printing elements..."<<endl;

for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        cout<<arr[i][j]<< " ";
    }
cout<<endl;
    
}
int target;
cout<<"Enter the Element to be search"<<endl;
cin>>target;

if(isFound(arr,target,3,4))
{
    cout<<"Element is found"<<endl;

}
else{
    cout<<"Element is not found"<<endl;

}

}

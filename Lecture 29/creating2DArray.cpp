#include <iostream>
using namespace std;

int  main()
{
    int n,m;
    cout<<"Enter the number of rows and Column: ";
    cin>>n;
    cin>>m;

    //creating Array
    int **arr = new int*[n];
    for(int i=0; i<n ; i++)
    {
        arr[i]= new int[m];
    }
    
    //Enter value in array
    cout<<"Enter the element : ";
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing array
     for(int i=0; i<n ; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}
#include <iostream>
using namespace std;
int power()
{
    int a,b; int val=1;
    cout<<"Enter the value of a,b : ";
    cin>>a>>b;
    for(int i=0; i<b ; i++)
    {
        val = a*val;
    }
    return val;
}

int main()
{
    int ans = power();
    cout<<"answer is :" <<ans; 
    
    return 0;
}

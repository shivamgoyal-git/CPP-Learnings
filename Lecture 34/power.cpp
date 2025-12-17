#include <iostream>
using namespace std;

int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    //recursive call
    int ans = power(a,b/2);
    if(b%2==0) //even
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>> a>>b;
    int ans = power(a,b);
    cout<<"ans is : "<<ans;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int c= a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}

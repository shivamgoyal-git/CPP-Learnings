#include <iostream>
using namespace std;

bool iseven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout << "Enter the no. :";
    cin >> num;

    if (iseven(num))
    {
        cout << "it is an even number";
    }
    else
    {
        cout << "odd number";
    }

    return 0;
}

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(n - r) * factorial(r);
    return num / denom;
}

main()
{
    int n, r;
    cout << "Enter the value of n,r : ";
    cin >> n >> r;
    cout << "Answer is :" << nCr(n, r);
    return 0;
}

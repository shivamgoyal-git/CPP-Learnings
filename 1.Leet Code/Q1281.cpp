#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int digit;
        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int result = product - sum;

    cout<<result;
    return 0;
}

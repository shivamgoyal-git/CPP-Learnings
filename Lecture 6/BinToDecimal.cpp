#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int dig = n % 10;
        if (dig == 1)
        {
            ans = (dig * i) + ans;
        }
        i = i * 2;
        n = n/10;
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int answer = 0;
    int i = 1;

    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * i) + answer;
        n = n >> 1;
        i = i* 10;
    }

    cout << answer << endl;
}
#include <iostream>
using namespace std;

int main()

{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // printing spaces
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }

        // printing 2 pattern
        j=1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        //printing 3 pattern
        j=1;
        while (j<=i-1)
        {
            cout<<i-j;
            j++;
        }
        

        cout << endl;
        i++;
    }
}
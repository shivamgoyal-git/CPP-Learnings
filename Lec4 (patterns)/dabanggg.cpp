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
        // 1st pattern
        int j = 1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }

        //2nd pattern
        j=1;
        while(j<=2*(i-1))
        {
            cout<<"*";
            j++;
        }


        //3rd pattern
        j=1;
        while(j<=n-i+1)
        {
            cout<<n-j-i+2;
            j++;
        }

        cout<<endl;
        i++;

    }
}
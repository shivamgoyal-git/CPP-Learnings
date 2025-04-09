// #include <iostream>
// using namespace std;
// int Setbit(int a)
// {  int ans1 =0;

//     while (a!=0)
//     {
//         if (a&1)
//         {
//             ans1++;
//         }
//         a=a>>1;
//     }
//     return ans1;
// }

// int main()
// {   int a, b ;
// cin>>a>>b;
//  int total = Setbit(a) +Setbit(b);
//     cout<<"Total no. of set bits is :"<< total<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int setbitof(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    // cout << count;
    return count;
}

int main()
{

    int a,b;
    cout << "Enter the value of a and b: ";
    cin >> a>>b;
    cout << setbitof(a)+setbitof(b);
}
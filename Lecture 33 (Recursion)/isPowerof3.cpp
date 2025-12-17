#include <iostream>
using namespace std;

 bool isPowerOfThree(int n) {
         if(n==1) return 1;

        else if(n%3==0)
        {
            bool ans = isPowerOfThree(n/3);
        }
        else return 0;
    }
int main()
{
    int n;
    cin>>n;
    if(isPowerOfThree(n)) cout<<"true";
    else cout<<"false";
    return 0;
}
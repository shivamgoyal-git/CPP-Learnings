#include <iostream>
using namespace std;

void sayDigit(int n, string array[10])
{
    if(n==0)
    {
        return ;
    }
    int digit = n%10;
    n = n/10;
    //cout<<array[digit]<<" "; //tail recursion

    sayDigit(n,array);

    cout<<array[digit]<<" "; //head recursion


}
int main()
{
    string array[10] = {"zero","one", "two", "three", "four",
                        "five","six", "seven", "eight", "nine"};
    cout<<"Enter the digit: ";
    int n;
    cin>>n;
    cout<<"saying digits...."<<endl;
    sayDigit(n,array);
}
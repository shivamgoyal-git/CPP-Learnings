#include <iostream>
using namespace std;


bool checkPalindrome(string str, int i)     //using one pointer and recursion
{
    int n = str.length();
    int j = n-i-1;
    if(i>j)
    {
        return true;
    }
    if(str[i]!= str[j])
    {
        return false;
    }
    else{
        return checkPalindrome(str, i+1);
    }
}
int main()
{
    string name = "shivammavihs";

    if(checkPalindrome(name,0))
    {
        cout<<endl<<"Its a Palindrome"<<endl;
    }
    else{
        cout<<endl<<"Its NOT a Palindrome"<<endl;
    }
    return 0;
}
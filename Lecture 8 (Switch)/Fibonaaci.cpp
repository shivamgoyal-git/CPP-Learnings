#include <iostream>
using namespace std;

int fibonacci(int n){

int a = 0 ; int b=1 ;int c;
if (n==1)
{return a;}

 else if (n==2)
{return b;}
int z=2;
while(z<n){
c= a+b;
a=b;
b=c;
z++;
}
return c;
}

int main()
{
    int n;
    cout<<"Enter :";
    cin>>n;
    int ans = fibonacci(n);
    cout<<"Ans is :"<<ans;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
   int n = 0;
   cout << "Enter the Ammount : ";
   cin >> n;
   int var;
   int a = 0, b = 0, c = 0, d = 0;
   if (n >= 100)
   {
      var = 100;
   }
   else if (n >= 50)
   {
      var = 50;
   }
   else if (n >= 20)
   {
      var = 20;
   }
   else if (n >= 10)
   {
      var = 10;
   }

   switch (var)
   {
   case (100):
      a = n / 100;
      cout << "No. of 100 rs note : " << a << endl;
      n = n % 100;
   case (50):
      b = n / 50;
      cout << "No. of 50 rs note : " << b << endl;
      n = n % 50;
   case (20):
      c = n / 20;
      cout << "No. of 20 rs note : " << c << endl;
      n = n % 20;
   case (10):
      d = n / 10;
      cout << "No. of 10 rs note : " << d << endl;
      n = n % 10;
   }

   cout << "No. of 1 rs note : " << n << endl;
   return 0;
}

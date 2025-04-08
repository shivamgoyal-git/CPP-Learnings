#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n - i + 1)
    {
      cout << j;
      j++;
    }
    int k = 1;
    while (k <= 2 * (i - 1))
    {
      cout << "*";
      k++;
    }
    int l=1;
    int start = n - i + 1;
    while (l <= n - i + 1)
    {
      cout << start;
      start--;
      l++;
    }
    i++;
    cout << endl;
  }
  return 0;
}

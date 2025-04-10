#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout << "Printing" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << arr[i] << " ";
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[10];
    fill_n(array,5,2);  //{fill_n} used to fill {5} location of {array} with number {2}
    printArr(array,10);

    return 0;
}

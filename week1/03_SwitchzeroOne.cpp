#include <iostream>
using namespace std;
// input Array =  [ 1, 0, 0, 1, 1, 1, 0, 1, 0 ]
// Output Array = [ 0, 1, 1, 0, 0, 0, 1, 0, 1 ]
void reverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[10] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 0};
    reverse(arr, 10);
    printarray(arr, 10);

    return 0;
}
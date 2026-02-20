#include <iostream>
using namespace std;
void sortZeroOne(int arr[], int size)
{
    int ZeroCount = 0;
    int OneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            ZeroCount++;
        }
        else
        {
            OneCount++;
        }
    }
    // Arranging The Array;
    for (int i = 0; i < size; i++)
    {
        if (i < ZeroCount)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
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

    int arr[10] = {0, 0, 1, 1, 1, 1, 0, 0, 1, 0};
    sortZeroOne(arr, 10);
    printarray(arr, 10);

    return 0;
}
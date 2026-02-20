#include <iostream>
using namespace std;
// input Array=[1,0,2,2,0,1,0,2]
// output Array=[0,0,0,1,1,2,2,2]
void dutchNation(int arr[], int size)
{
    int count_zero = 0;
    int count_one = 0;
    int count_two = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_zero++;
        }
        if (arr[i] == 1)
        {
            count_one++;
        }
        else
        {
            int count_two;
        }
    }
    // Insertion Of Array
    for (int i = 0; i < size; i++)
    {
        if (i < count_zero)
        {
            arr[i] = 0;
        }
        else if (i >= count_zero && i < count_zero + count_one)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 2;
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

    int arr[10] = {0, 2, 1, 2, 1, 2, 1, 2, 1, 0};
    dutchNation(arr, 10);
    printarray(arr, 10);

    return 0;
}
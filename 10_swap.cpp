#include <iostream>
using namespace std;

void SwapPosition(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int arr[5] = {3, 4, 5, 9, 1};

    SwapPosition(arr, 5);

    // Print reversed array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

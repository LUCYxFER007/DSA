#include <iostream>
using namespace std;

void Altermax(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right) // middle element
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }

        left++;
        right--;
    }
}

int main()
{
    int arr[5] = {3, 4, 5, 9, 1};
    Altermax(arr, 5);
    return 0;
}

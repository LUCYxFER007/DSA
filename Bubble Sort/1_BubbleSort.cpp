#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // When We Have To Move Towards Right
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // When We Have To Move Towards Left
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 3, 4, 5, 6, 7};
    int index = BinarySearch(even, 6, 78);
    cout << " Index of 4 is " << index << endl;
}
#include <iostream>
using namespace std;
// Binary Search In Array
int binary(int arr[], int size, int target)
{
    int n = size;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            // start value update karna haii
            start = mid + 1;
        }
        else
        {
            // End ki value Update karni hai
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {1, 3, 4, 5, 6, 7, 10, 12, 14, 15};
    cout << "Elemnt found at index:" << binary(arr, 10, 15);
    return 0;
}
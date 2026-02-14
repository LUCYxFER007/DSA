#include <iostream>
using namespace std;
int FindMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[5] = {3, 4, 5, 9, 1};
    cout << FindMin(arr, 5);
    return 0;
}
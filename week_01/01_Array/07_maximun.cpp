#include <iostream>
using namespace std;
int FindMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5] = {3, 4, 5, 9, 1};
    cout << FindMax(arr, 5);
    return 0;
}
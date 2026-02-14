#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {1, 2, 3, 42, 45, 67, 8, 7, 6, 5};
    int target = LinearSearch(arr, 10, 3);
    cout << target;

    return 0;
}
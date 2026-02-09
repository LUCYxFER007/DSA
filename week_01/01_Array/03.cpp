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
    int arr[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    cout << LinearSearch(arr, 10, 4);

    return 0;
}
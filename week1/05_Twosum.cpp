#include <iostream>
using namespace std;
bool checksum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                // Target Found
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int arr[5] = {1, 3, 4, 5, 6};
    cout << checksum(arr, 5, 7);
}
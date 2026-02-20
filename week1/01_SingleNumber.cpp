#include <iostream>
using namespace std;
// Finding SIngle number
// int single(int arr[], int size)
// {
//     int single = 0;
//     for (int i = 0; i < size; i++)
//     {
//         single = arr[i] ^ single;
//     }
//     return single;
// }
int alt(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        // If the number appeared only once, it's the unique one
        if (count == 1)
        {
            return arr[i];
        }
    }
    return -1; // Return -1 if no unique number is found
}
int main()
{
    int nums[5] = {4, 1, 2, 1, 2};
    cout << "The Unique Number is:" << alt(nums, 5);
    return 0;
}
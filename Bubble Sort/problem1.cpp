#include <iostream>
using namespace std;
// Finding The First and Last Occurance of Number in The Array
int LastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            // Right mai Shift Hoga
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // Left mai Shift Hoga
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int FirstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            // Right mai Shift Hoga
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // Left mai Shift Hoga
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[10] = {2, 3, 4, 7, 7, 7, 7, 7, 7, 7};

    int First_occ = FirstOcc(arr, 10, 7);
    int Last_occ = LastOcc(arr, 10, 7);
    cout << "The First Occurance of 7 is :" << First_occ << endl;
    cout << "The Last Occurance of 7 is :" << Last_occ;
}
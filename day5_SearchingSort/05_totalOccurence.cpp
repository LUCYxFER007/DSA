#include <iostream>
#include <algorithm>
using namespace std;
int lastOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int firstOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 4, 5, 6};
    int firstOcc = firstOccurence(arr, 10, 3);
    int lasttOcc = lastOccurence(arr, 10, 3);
    cout << "Total Occurence of 3 : " << lasttOcc - firstOcc + 1;
    return 0;
}
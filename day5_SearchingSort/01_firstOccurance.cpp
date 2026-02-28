#include <iostream>
#include <algorithm>
using namespace std;
int firstOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    // Store and Compute ke  wala Logic lagayange
    // Phle Binary Search se Hum target ko search karange phle jo vaue milegi usko store karwa dnege
    // phir uske piche jaa kar dekhneg ki hamara result mila ya nahi agar nahi nahi mila to vlaue update nahi karange
    // Agar mil gya to hum us value ko update kar denge and aur piche jaa ke search karte rahange jab tak hume apna lowest value mil nahi jata
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;     // Store karwa liye ANs mai value
            end = mid - 1; // End ko Update kar ke chekc kar rahe hai isse chota bhi koi value hai ya nahi
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        // Ye Cheezien Hmaesha Bhul jata hu
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 4, 5, 6};
    cout << "Element found at index:" << firstOccurence(arr, 10, 5);
    return 0;
}
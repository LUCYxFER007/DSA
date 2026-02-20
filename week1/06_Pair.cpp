#include <iostream>
#include <utility> // Best practice to include this for std::pair

using namespace std;

pair<int, int> checksum(int arr[], int size, int target)
{
    pair<int, int> ans = {-1, -1};
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans; // Return immediately once found!
            }
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 3, 4, 5, 6};
    pair<int, int> result = checksum(arr, 5, 7);

    // You must access .first and .second to print them
    if (result.first != -1)
    {
        cout << "Pair found: " << result.first << ", " << result.second << endl;
    }
    else
    {
        cout << "No pair found." << endl;
    }

    return 0;
}
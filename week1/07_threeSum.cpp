#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == target)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {3, 4, 5, 6, 7, 8, 9, 1, 10, 23};

    // Convert array to vector (values stay same)
    vector<int> nums(arr, arr + 10);

    vector<vector<int>> result = threeSum(nums, 20);

    // Print result
    for (auto &triplet : result)
    {
        for (int x : triplet)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
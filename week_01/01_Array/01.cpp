#include <iostream>
using namespace std;
// Array
int main()
{
    int arr[2] = {1, 2};
    int brr[4] = {1};
    int crr[20] = {3};
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i];
        cout << brr[i] << endl;
        cout << crr[i];
    }
    return 0;
}
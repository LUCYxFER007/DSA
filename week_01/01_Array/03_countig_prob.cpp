#include <iostream>
using namespace std;
void count(int arr[], int size)
{
    int Zero = 0;
    int One = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            One = One + 1;
        }
        else
        {
            Zero = Zero + 1;
        }
    }
    cout << "No. Of Zero is :" << Zero << endl;
    cout << "No. Of One is :" << One << endl;
}
int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    count(arr, 6);
    return 0;
}
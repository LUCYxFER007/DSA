#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr[size] = {2, 3, 4, 5, 6};

    // case1:
    //  for (int i = 0; i < size; i++)
    //  {
    //      for (int j = 0; j < size; j++)
    //      {
    //          cout << arr[i] << " " << arr[j] << endl;
    //      }
    //  }
    // Case2:
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
    // //Case3:
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << arr[i] << " " << arr[j] << endl;
    //     }
    // }
    // //Case4:
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = size-1; j >0; j++)
    //     {
    //         cout << arr[i] << " " << arr[j] << endl;
    //     }
    // }
    // //Case5:
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout << arr[i] << " " << arr[j] << endl;
    //     }
    // }
    // //Case6:
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout << arr[i] << " " << arr[j] << endl;
    //     }
    // }
    // //Case7:
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j =size; j >i; j--)
    //     {
    //         cout << arr[i] << " " << arr[j] << endl;
    //     }
    // }

    return 0;
}

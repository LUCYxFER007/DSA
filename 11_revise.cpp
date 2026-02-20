#include <iostream>
using namespace std;
// Linear Search In Array
int linear(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i + 1;
        }
    }
    return false;
}
// Finding Maximun in Array
int maximun(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
// Finding Minimun in Array
int minimum(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
// Two Pointer Technique
int extrme(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left];
            arr[right];
            left++;
            right--;
        }
    }
}
// swapping of Two number using Xor
void swap(int a, int b)
{
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << "value of A is:" << a << endl;
    cout << "Value of B is: " << b << endl;
}
//
//
//
//
int main()
{
    int arr[5] = {2, 34, 5, 6, 1};
    cout << "Elememt found at position:" << linear(arr, 5, 9) << endl;
    cout << "Maxiumun Value in Array is:" << maximun(arr, 5) << endl;
    cout << "Maxiumun Value in Array is:" << minimum(arr, 5) << endl;
    cout << "Answer of Two pointer is :" << extrme(arr, 5) << endl;
    swap(2, 3);
    return 0;
}
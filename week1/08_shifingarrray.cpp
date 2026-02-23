#include <iostream>
using namespace std;
void ShiftArray(int arr[], int size, int shift)
{
    // Agar Modulous Zero aayega to Shifting ki jarurat nahi hai ki q shift karne ke baad same Array Return Ho jata hai
    int finalShift = shift % size;
    if (finalShift == 0)
    {
        return;
        // Kuch nahi karna hai bas Code Base Se Wopas Laut Anna hai!!
    }
    // Step1:Create An Empty Array
    int temp[size];
    int index = 0;
    for (int i = size - finalShift; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - finalShift];
    }

    // Step2:Copy The Elemet From The Origal Array and Sttore iit:
    for (int i = 0; i < finalShift; i++)
    {
        arr[i] = temp[i];
    }

    // Step3:
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "The Original Array is:";
    print(arr, 5);
    cout << "The Rotated Array is:";
    ShiftArray(arr, 5, 2);
    print(arr, 5);

    return 0;
}
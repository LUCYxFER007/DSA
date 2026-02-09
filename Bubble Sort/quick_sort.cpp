#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Quick Sort Partition Function
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];   // pivot element
    int i = low - 1;         // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort Function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // left subarray
        quickSort(arr, pi + 1, high);  // right subarray
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
  cout << "UnSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
cout << endl;
    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

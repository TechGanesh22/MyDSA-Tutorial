#include <iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
    int key;
    int j = 0;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter size of the array " << endl;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th element :";
        cin >> arr[i];
    }

    cout << "Before sorting :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    insertionSort(arr, n);
    cout << endl
         << "After sorting :";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
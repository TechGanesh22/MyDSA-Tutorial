#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void heapSort(int arr[], int n)
{
    // Write your code
    // Build the heap
    for (int i = 1; i < n; i++)
    {
        int ci = i;
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (arr[ci] < arr[pi])
            {
                // swap(arr[ci],arr[pi]);
                int temp = arr[ci];
                arr[ci] = arr[pi];
                arr[pi] = temp;
            }
            else
            {
                break;
            }
            ci = pi;
        }
    }

    // Remove elements
    int size = n;
    while (size > 1)
    {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;
        size--;

        int pi = 0;
        int lci = 2 * pi + 1;
        int rci = 2 * pi + 2;

        while (lci < size)
        {
            int minindex = pi;
            if (arr[lci] < arr[minindex])
                minindex = lci;
            if (rci < size && arr[rci] < arr[minindex])
                minindex = rci;
            if (minindex == pi)
                break;

            // swap(arr[minindex],arr[pi]);
            int temp = arr[minindex];
            arr[minindex] = arr[pi];
            arr[pi] = temp;

            pi = minindex;
            lci = 2 * pi + 1;
            rci = 2 * pi + 2;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array :";
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    heapSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;

#include <iostream>
using namespace std;
int fun(int arr[], int a, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == a)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[6] = {5, 8, 9, 5, 6, 8, 5, 8, 5};
    cout << fun(arr, 5, 9);
    return 0;
}
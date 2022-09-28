#include <cstring>
#include <iostream>
using namespace std;

int knapsack(int *weight, int *value, int n, int maxWeight)
{
    // Write your code here
    int arr[n + 1][maxWeight + 1];
    int i, j;
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < maxWeight + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < maxWeight + 1; j++)
        {
            if (weight[i - 1] <= j)
            {
                int a = value[i - 1] + arr[i - 1][j - weight[i - 1]];
                int b = arr[i - 1][j];
                arr[i][j] = max(a, b);
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }
    return arr[n][maxWeight];
}

int main()
{
    int n;
    cout << "Enter the size of the Knapsack :";
    cin >> n;
    int *wt = new int[n];
    int *val = new int[n];
    cout << "Enter"
         << " " << n << " "
         << "weights" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << "Enter values" << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> val[j];
    }

    int w;
    cout << "Enter the maxWeight of the knapsack :";
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}

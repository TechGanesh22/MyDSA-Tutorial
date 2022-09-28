#include <iostream>
using namespace std;

int lcs_DP(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int **output = new int *[m + 1];

    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n + 1];
    }

    // Fill 1st row
    for (int j = 0; j <= n; j++)
    {
        output[0][j] = 0;
    }

    // Fill 1st col
    for (int i = 1; i <= m; i++)
    {
        output[i][0] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // Check if 1st char matches
            if (s[m - i] == t[n - j])
            {
                output[i][j] = 1 + output[i - 1][j - 1];
            }
            else
            {
                int a = output[i - 1][j];
                int b = output[i][j - 1];
                int c = output[i - 1][j - 1];
                output[i][j] = max(a, max(b, c));
            }
        }
    }

    return output[m][n];
}

int lcs_mem(string s, string t, int **output)
{
    int m = s.size();
    int n = t.size();

    // Base case
    if (s.size() == 0 || t.size() == 0)
    {
        return 0;
    }

    // Check if ans already exists
    if (output[m][n] != -1)
    {
        return output[m][n];
    }

    int ans;
    // Recursive calls
    if (s[0] == t[0])
    {
        ans = 1 + lcs_mem(s.substr(1), t.substr(1), output);
    }
    else
    {
        int a = lcs_mem(s.substr(1), t, output);
        int b = lcs_mem(s, t.substr(1), output);
        int c = lcs_mem(s.substr(1), t.substr(1), output);
        ans = max(a, max(b, c));
    }

    // Save your calculation
    output[m][n] = ans;

    // Return ans
    return ans;
}

int lcs_mem(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int **output = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n + 1];
        for (int j = 0; j <= n; j++)
        {
            output[i][j] = -1;
        }
    }

    return lcs_mem(s, t, output);
}

int lcs(string s, string t)
{
    // Base case
    if (s.size() == 0 || t.size() == 0)
    {
        return 0;
    }

    // Recursive calls
    if (s[0] == t[0])
    {
        return 1 + lcs(s.substr(1), t.substr(1));
    }
    else
    {

        int a = lcs(s.substr(1), t);
        int b = lcs(s, t.substr(1));
        int c = lcs(s.substr(1), t.substr(1));
        return max(a, max(b, c));
    }
}

int main()
{
    string s, t;
    cout << "Enter First String : " << endl;
    cin >> s;
    cout << "Enter Second String :" << endl;
    cin >> t;
    // cin >> s >> t;

    cout << lcs_DP(s, t) << endl;
    cout << lcs_mem(s, t) << endl;
    cout << lcs(s, t) << endl;
}

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int lcs_DP(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **output = new int *[m + 1];

//     for (int i = 0; i <= m; i++)
//     {
//         output[i] = new int[n + 1];
//     }

//     // Fill 1st row
//     for (int j = 0; j <= n; j++)
//     {
//         output[0][j] = 0;
//     }

//     // Fill 1st col
//     for (int i = 1; i <= m; i++)
//     {
//         output[i][0] = 0;
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             // Check if 1st char matches
//             if (s[m - i] == t[n - j])
//             {
//                 output[i][j] = 1 + output[i - 1][j - 1];
//             }
//             else
//             {
//                 int a = output[i - 1][j];
//                 int b = output[i][j - 1];
//                 int c = output[i - 1][j - 1];
//                 output[i][j] = max(a, max(b, c));
//             }
//         }
//     }

//     return output[m][n];
// }

// int main()
// {
//     string s, t;
//     cout << "Enter First String : " << endl;
//     cin >> s;
//     cout << "Enter Second String :" << endl;
//     cin >> t;

//     cout << lcs_DP(s, t) << endl;
// }

// #include <cstring>
// #include <iostream>
// using namespace std;

// int knapsack(int *weight, int *value, int n, int maxWeight)
// {
//     // Write your code here
//     int arr[n + 1][maxWeight + 1];
//     int i, j;
//     for (i = 0; i < n + 1; i++)
//     {
//         for (j = 0; j < maxWeight + 1; j++)
//         {
//             if (i == 0 || j == 0)
//             {
//                 arr[i][j] = 0;
//             }
//         }
//     }
//     for (i = 1; i < n + 1; i++)
//     {
//         for (j = 1; j < maxWeight + 1; j++)
//         {
//             if (weight[i - 1] <= j)
//             {
//                 int a = value[i - 1] + arr[i - 1][j - weight[i - 1]];
//                 int b = arr[i - 1][j];
//                 arr[i][j] = max(a, b);
//             }
//             else
//             {
//                 arr[i][j] = arr[i - 1][j];
//             }
//         }
//     }
//     return arr[n][maxWeight];
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the Knapsack :";
//     cin >> n;
//     int *wt = new int[n];
//     int *val = new int[n];
//     cout << "Enter"
//          << " " << n << " "
//          << "weights" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> wt[i];
//     }
//     cout << "Enter values" << endl;
//     for (int j = 0; j < n; j++)
//     {
//         cin >> val[j];
//     }

//     int w;
//     cout << "Enter the maxWeight of the knapsack :";
//     cin >> w;

//     cout << knapsack(wt, val, n, w) << "\n";

//     delete[] wt;
//     delete[] val;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int board[11][11];

// bool isPossible(int n, int row, int col)
// {

//     // Same Column
//     for (int i = row - 1; i >= 0; i--)
//     {
//         if (board[i][col] == 1)
//         {
//             return false;
//         }
//     }
//     // Upper Left Diagonal
//     for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//     }

//     // Upper Right Diagonal

//     for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//     }

//     return true;
// }
// void nQueenHelper(int n, int row)
// {
//     if (row == n)
//     {
//         // We have reached some solution.
//         // Print the board matrix
//         // return

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << board[i][j] << " ";
//             }
//         }
//         cout << endl;
//         return;
//     }

//     // Place at all possible positions and move to smaller problem
//     for (int j = 0; j < n; j++)
//     {

//         if (isPossible(n, row, j))
//         {
//             board[row][j] = 1;
//             nQueenHelper(n, row + 1);
//             board[row][j] = 0;
//         }
//     }
//     return;
// }
// void placeNQueens(int n)
// {

//     memset(board, 0, 11 * 11 * sizeof(int));

//     nQueenHelper(n, 0);
// }
// int main()
// {

//     placeNQueens(5);
//     return 0;
// }

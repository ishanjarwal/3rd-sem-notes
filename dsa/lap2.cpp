#include <iostream>
using namespace std;

void print(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int **sum(int **a1, int **a2, int n, int m)
{
    int **ans = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = a1[i][j] + a2[i][j];
        }
    }
    return ans;
}

int **transpose(int **arr, int n, int m)
{
    int **ans = new int *[m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = new int[n];
        for (int j = 0; j < m; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
    return ans;
}

int **generateArray(int n, int m)
{
    int **a1 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a1[i] = new int[m];
    }

    cout << "Enter values of elements " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a1[i][j];
        }
        cout << endl;
    }
    return a1;
}

int **multiply(int **a1, int **a2, int n, int m, int x, int y)
{
    if (m != x)
    {
        cout << "Multiplication not possible" << endl;
        return nullptr;
    }
    int **ans = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = new int[y];
        for (int j = 0; j < y; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                ans[i][j] += (a1[i][k] * a2[k][j]);
            }
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter Rows for Matrix : ";
    cin >> n;
    cout << "Enter Colums for  Matrix : ";
    cin >> m;
    int **a1 = generateArray(n, m);
    int x, y;
    cout << "Enter Rows for Matrix : ";
    cin >> x;
    cout << "Enter Colums for  Matrix : ";
    cin >> y;

    int **a2 = generateArray(x, y);

    // int **ans = sum(a1, a2, n, m);
    // int **ans = sub(a1, a2, n, m);
    // int **ans = transpose(a1, n, m);
    int **ans = multiply(a1, a2, n, m, x, y);

    print(ans, n, m);

    return 0;
}
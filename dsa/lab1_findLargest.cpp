#include <iostream>
using namespace std;

int findLargest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {0};
    int length = 5;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int ans = findLargest(arr, length);
    cout << ans << endl;
    return 0;
}
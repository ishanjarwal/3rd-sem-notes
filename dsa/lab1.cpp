#include <iostream>
using namespace std;

int isPresent(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {0};
    int length = 5;
    int target;
    cout << "Type 5 Numbers : " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "Type the target : " << endl;
    cin >> target;
    int ans = isPresent(arr, 5, target);
    if (ans != -1)
    {
        cout << target << " is present at the index : " << ans << endl;
    }
    else
    {
        cout << target << " is not present in the array" << endl;
    }
    return 0;
}
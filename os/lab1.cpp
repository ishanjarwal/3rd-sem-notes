#include <iostream>
using namespace std;

int main()
{
    int order = 3;
    int num;
    cout << "Type a Number : ";
    cin >> num;
    int check = num;
    int result = 0;
    int digits = 0;
    while (check != 0)
    {
        digits++;
        check /= 10;
    }
    check = num;
    while (check != 0)
    {
        int remainder = check % 10;
        int addable = 1;
        for (int i = 1; i <= digits; i++)
        {
            addable *= remainder;
        }
        result += addable;
        check /= 10;
    }
    if (result == num)
    {
        cout << num << " is an Armstrong Number";
    }
    else
    {
        cout << "The number " << num << " is an not Armstrong Number";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    // Stack : Last In First Out Principle
    // insertion and deletion is possible only at one end;

    // methods :
    // 1. PEEP : returns the value pointed by the first element.
    // 2. PUSH :
    // 3. POP :
    // 4. TOP :

    // overflow condition : top = n-1 (stack is full, no insertion possible).
    // underflow condition : top = NULL (stack is empty, no deletion possible).

    // Queue :
    // Follows First In First Out.

    // methods :
    // 1. Push : adds element to the rear end
    // 2. Pop : removes element from the front end

    // Tree : collection of nodes stored in a heirarchial manner

    // Asymptotic Notations :
    // 1. BigO : worst case scenario / upper bound
    // bigO curve (imp)
    // f(n) = O(f(n)) // O is 'order of'

    // eg: 2n^2 + n;
    // f(n) <= C.g(n);
    // 2n^2 + n <= C.(n^2)
    // 2n^2 + n <= 3(n^2)
    // n < n^2
    //  1<= n
    // f(n) = O(n^2);

    // constant time : O(1);
    // linear time : O(n);
    // logarithmic time : O(logN)
    // quadratic time : O(n^2)
    // cubic time : O(n^3);
    // exponential time : O(2^n);
    // factorial time : O(N!);

    return 0;
}
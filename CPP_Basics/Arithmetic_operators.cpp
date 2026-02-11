/* ============================================================
   1) ARITHMETIC OPERATORS: +  -  *  /  %  ++  --
   Notes:
   - % works only with integers
   - ++a (pre) increments then uses; a++ (post) uses then increments
   ============================================================ */
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 3;

    cout << "a + b = " << (a + b) << endl;   // addition
    cout << "a - b = " << (a - b) << endl;   // subtraction
    cout << "a * b = " << (a * b) << endl;   // multiplication
    cout << "a / b = " << (a / b) << endl;   // integer division
    cout << "a % b = " << (a % b) << endl;   // remainder

    cout << "pre-increment ++a = " << (++a) << endl; // a becomes 9, prints 9
    cout << "post-increment a++ = " << (a++) << endl; // prints 9, then a becomes 10
    cout << "now a = " << a << endl;

    cout << "post-decrement b-- = " << (b--) << endl; // prints 3, then b becomes 2
    cout << "now b = " << b << endl;

    return 0;
}

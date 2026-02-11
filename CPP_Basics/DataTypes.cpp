/*
    Topic: Data Types in C++
    Covers (as per your notes):
    1) Primitive data types: char, int, bool, float, double, void (concept)
    2) Different base values (hex example)
    3) Type safety (strongly typed) + what happens on wrong assignment
    4) Type conversion (casting char to int, int + char)
    5) Size of data types using sizeof
    6) Data type modifiers: short, long, signed, unsigned (examples + sizeof)

    NOTE:
    - Some sizes can vary by compiler/architecture.
    - This program prints sizes at runtime using sizeof.
*/

#include <iostream>
using namespace std;

// void data type example: function that returns nothing
void greet() {
    cout << "Hello! (from a void function)\n";
}

int main() {

    // ------------------------------------------------------------
    // 1) Primitive Data Types
    // ------------------------------------------------------------

    // char: stores a single character in single quotes
    char c = 'A';
    cout << "char c = " << c << endl;

    // int: stores integers (example: decimal)
    int x = 25;
    cout << "int x (decimal) = " << x << endl;

    // int: hexadecimal literal example (0x15 is hex for 21)
    x = 0x15;
    cout << "int x (hex 0x15) = " << x << endl;

    // bool: true(1) or false(0)
    bool isTrue = true;
    cout << "bool isTrue = " << isTrue << endl;

    // float: decimal numbers (single precision)
    float f = 36.5f; // 'f' makes it a float literal
    cout << "float f = " << f << endl;

    // double: decimal numbers (higher precision)
    double pi = 3.1415926535;
    cout << "double pi = " << pi << endl;

    // void: cannot create a void variable
    // void v; // ❌ invalid
    greet();  // ✅ calling a void function

    // ------------------------------------------------------------
    // 2) Type Safety (Strongly Typed) Example
    // C++ allows some implicit conversions, but they can cause loss.
    // ------------------------------------------------------------
    bool a = 10.248f; // float -> bool (non-zero becomes true)
    cout << "bool a assigned from 10.248f = " << a << endl; // prints 1

    // Better approach: explicit conversion when needed
    bool b = (10.248f != 0.0f);
    cout << "bool b (explicit logic) = " << b << endl;

    // ------------------------------------------------------------
    // 3) Data Type Conversion (Type Casting)
    // ------------------------------------------------------------
    int n = 3;
    char ch = 'C';

    // Convert char to int (ASCII value)
    cout << "ASCII of 'C' = " << (int)ch << endl;

    // char participates as its ASCII in arithmetic with int
    int sum = n + ch; // 3 + 67 = 70
    cout << "n + ch = " << sum << endl;

    // Another common conversion: double -> int (truncation)
    double d = 9.99;
    int di = (int)d; // 9 (decimal part removed)
    cout << "double d = " << d << ", after (int)d = " << di << endl;

    // ------------------------------------------------------------
    // 4) Size of Data Types using sizeof
    // ------------------------------------------------------------
    cout << "\n--- Sizes (bytes) using sizeof ---\n";
    cout << "sizeof(char)   = " << sizeof(char) << endl;
    cout << "sizeof(bool)   = " << sizeof(bool) << endl;
    cout << "sizeof(int)    = " << sizeof(int) << endl;
    cout << "sizeof(float)  = " << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;

    // ------------------------------------------------------------
    // 5) Data Type Modifiers (short, long, signed, unsigned)
    // These can change the range (and sometimes size).
    // ------------------------------------------------------------
    short int s = -10;          // usually smaller than int
    long int l = 1000000;       // often larger/equal to int (depends)
    long long int ll = 9000000000LL; // very large integer
    unsigned int ui = 42;       // only non-negative values
    signed int si = -42;        // signed is default for int
    long double ld = 3.141592653589793238L; // extended precision

    cout << "\n--- Modifier Examples ---\n";
    cout << "short int s = " << s << endl;
    cout << "long int l = " << l << endl;
    cout << "long long int ll = " << ll << endl;
    cout << "unsigned int ui = " << ui << endl;
    cout << "signed int si = " << si << endl;
    cout << "long double ld = " << (double)ld << " (printed as double here)\n";

    cout << "\n--- Sizes with Modifiers (bytes) ---\n";
    cout << "sizeof(short int)     = " << sizeof(short int) << endl;
    cout << "sizeof(long int)      = " << sizeof(long int) << endl;
    cout << "sizeof(long long int) = " << sizeof(long long int) << endl;
    cout << "sizeof(unsigned int)  = " << sizeof(unsigned int) << endl;
    cout << "sizeof(long double)   = " << sizeof(long double) << endl;

    return 0;
}

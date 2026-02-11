/* ============================================================
   3) LOGICAL OPERATORS: &&  ||  !
   Notes:
   - && true only if both conditions are true
   - || true if any condition is true
   - ! reverses true/false
   ============================================================ */
#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 0;

    cout << "(a && b) = " << (a && b) << endl; // b is 0 => false => 0
    cout << "(a || b) = " << (a || b) << endl; // a non-zero => true => 1
    cout << "(!b)     = " << (!b) << endl;     // !0 => 1

    return 0;
}

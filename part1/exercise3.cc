#include <iostream>
using namespace std;
int main() {
    int a, b, c ;
    cout << "enter Three numbers :";
    cin >> a >> b >> c ;
    if ( a >= b && a >= c)
        cout << "maximum is " << a << endl;
    else if ( b >= a && b >= c)
        cout << "maximun is " << b << endl;
    else
        cout << "maximum is " << c << endl;
    return 0;
}
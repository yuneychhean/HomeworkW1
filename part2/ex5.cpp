#include <iostream>
using namespace std;
 int main (){
    int a ;
    cout << "Enter a number: ";
    cin >> a ;

    if (a % 3 == 0 && a % 5 == 0)
        cout << "The number " << a << " is divisible by both 3 and 5" << endl;
    else 
    cout << " The number " << a << " is not divisible by both 3 and 5" << endl;
    return 0;
 }
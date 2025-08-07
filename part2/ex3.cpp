#include <iostream>
using namespace std;   
 int main () {
    int a;
     cout << "Enter a number: ";
    cin >> a;
     if ( a > 0)
      cout << "The Number " << a <<  " is positive" << endl;
    else if  ( a < 0 )
     cout << "The Number " << a <<  " is negative" << endl;
     else if ( a == 0 )
      cout << "The Number " << a <<  " is zero" << endl;
     else
      cout << "Invalid input" << endl;
    return 0;

 }
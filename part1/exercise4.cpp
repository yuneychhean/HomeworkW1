#include <iostream>
using namespace std;
int main () {
    int n , i = 1;
    cout << "Enter a number :" ;
    cin >> n;
     while ( i <= n ){
        if ( i % 2 == 0)
            cout << "The number " << i << " is even" << endl;
            i++;
     }
     return 0 ;
}
#include <iostream>
using namespace std;
int main() {
    int choice; 
    float x, y, result;

    cout<< "1 . add\n"
         "2 . subtract\n"
         "3 . multiply\n"
         "4 . divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> x >> y ;

    if (choice ==1 )
        result = x + y;
    else if (choice == 2)
        result = x - y;
    else if (choice == 3)
        result = x * y;
    else if (choice == 4) 
    {
        if ( y != 0 )
            result = x / y;
        else {
            cout << "Error: Division by zero" << endl;  
    }
    } else {
        cout << "Invalid choice" << endl;
        return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}
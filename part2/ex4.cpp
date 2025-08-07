#include <iostream>
using namespace std;

int main (){
    char password[20];
    char YourPassword[20] = "admin123";
    cout << "Enter your password: ";
    cin.getline(password, 20);
     
    if (password == YourPassword)
        cout << "Access granted!" << endl;
    else
        cout << "Access denied!" << endl;
 return 0;
}
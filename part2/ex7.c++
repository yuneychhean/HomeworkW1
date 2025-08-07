#include <iostream>
using namespace std;
  int main (){
   char username[50] = "example123";
   int password = 12345;
    char inputUsername[50];
    int inputPassword;
     
    cout << "Enter your username: ";
    cin.getline(inputUsername, 50 );

    cout << "Enter your password: ";
    cin >> inputPassword;
    
    if (username == inputUsername && password == inputPassword)
        cout << "Login successful!" << endl;
    else 
        cout << "Login failed. Please check your username and password." << endl;

        return 0;
  }
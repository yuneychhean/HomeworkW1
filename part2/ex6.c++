#include <iostream>
using namespace std;
int main (){
    char name[50];
    int age;
    float gpa;

    cout << "Enter your name: ";
    cin.getline(name, 50);
    cout << "Enter your age: ";
    cin >> age ;
    cout << "Enter your GPA: ";
    cin  >> gpa;

    cout << "Hello!" << name << endl;
    cout << "You are " << age << endl;
    cout << "Your GPA is " << gpa << endl;
    return 0;
}
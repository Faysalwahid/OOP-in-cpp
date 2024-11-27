#include<iostream>
#include <string>
#include<iomanip>
using namespace std;

class Student {
    public:
    string name;
    int rollNumber;
    float cgpa;
};

int main(){
    // Declaring class variables
    Student student1;

    // Getting input for student1
    cout << "Enter Name for student 1: ";
    cin.sync(); // Clear the input buffer properly 
    getline(cin, student1. name); // To capture full name with spaces

    cout << "Enter roll number for student 1: ";
    cin >> student1. rollNumber;

    cout << "Enter Marks for student 1: ";
    cin >> student1. cgpa;


    // Displaying student 1 details
    cout << "\nStudent 1 Details :\n";
    cout << "Name: " << student1. name << '\n';
    cout << "Roll Number: " << student1. rollNumber << '\n';
    cout << "CGPA: " << fixed << setprecision(2) << student1. cgpa << endl;

    return 0;
}


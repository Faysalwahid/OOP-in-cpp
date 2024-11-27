#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student {
    public:
    string name;
    int rollNumber;
    float marks;
};

int main(){
    // Declaring class variables
    Student student1, student2, student3;

    // Getting input for student1
    cout << "Enter Name for student 1: ";
    cin.sync(); // Ignore any newline characters left in the input buffer
    getline(cin, student1.name); // Use getline to capture full name with spaces

    cout << "Enter roll number for student 1: ";
    cin >> student1.rollNumber;

    cout << "Enter Marks for student 1: ";
    cin >> student1.marks;

    // Getting input for student 2
    cout << "\nEnter Name for student 2: ";
    cin.sync(); // Ignore any newline characters left in the input buffer
    getline(cin, student2.name); // Use getline to capture full name with spaces

    cout << "Enter roll number for student 2: ";
    cin >> student2.rollNumber;

    cout << "Enter Marks for student 2: ";
    cin >> student2.marks;

    // Getting input for student 3
    cout << "\nEnter Name for student 3: ";
    cin.sync(); // Ignore any newline characters left in the input buffer
    getline(cin, student3.name); // Use getline to capture full name with spaces

    cout << "Enter roll number for student 3: ";
    cin >> student3.rollNumber;

    cout << "Enter marks for student 3: ";
    cin >> student3.marks;

    // Displaying student 1 details
    cout << "\nStudent 1 Details:\n";
    cout << "Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Marks: " << fixed << setprecision(3) << student1.marks << endl;

   // Displaying student 2 details
    cout << "\nStudent 2 Details:\n";
    cout << "Name: " << student2.name << endl;
    cout << "Roll Number: " << student2.rollNumber << endl;
    cout << "Marks: " << fixed << setprecision(3) << student2.marks << endl;

   // Displaying student 3 details
    cout << "\nStudent 3 Details:\n";
    cout << "Name: " << student3.name << endl;
    cout << "Roll Number: " << student3.rollNumber << endl;
    cout << "Marks: " << fixed << setprecision(3) << student3.marks << endl;

    return 0;
}


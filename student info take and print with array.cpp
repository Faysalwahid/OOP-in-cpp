#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student {
    public:
    string name;
    int id;
    float cgpa;
};

int main(){
    int numberOfStudents;
    cout << "Enter Number of students : " << '\n';
    cin >> numberOfStudents;

    // Declaring an array named students
    Student students[numberOfStudents];

    // Getting input for students
    for(int i = 0; i < numberOfStudents; i++)
    {
        cout << "\nEnter Details for student : " << (i + 1) << '\n';
        cin.sync(); // Ignore any newline characters left in the input buffer
        cout << "Enter Name: ";
        getline(cin, students[i].name); // Use getline to capture full name with spaces

        cout << "Enter Id : ";
        cin >> students[i].id;

        cout << "Enter CGPA : ";
        cin >> students[i].cgpa;
    }

    cout << '\n';

    // Displaying students details
    for(int i = 0; i < numberOfStudents; i++)
    {
        cout << "\nStudent " << (i + 1) << " Details:\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].id << endl;
        cout << "Marks: " << fixed << setprecision(2) << students[i].cgpa << endl;
    }

    return 0;
}


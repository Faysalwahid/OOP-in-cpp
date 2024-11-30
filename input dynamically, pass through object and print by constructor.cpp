#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student{
    public: // Access specifier
        // Class attributes
        string name;
        int id;
        float cgpa;

    // Constructor  (Special function)
    Student(string N, int I, float C) // Receiving  initialized object values in constructor
    {
        name = N;  // "Faysal" receive string N  cause purpose is to set value to name attribute
        id = I;         // 1001 receive int I  cause purpose is to set value to id attribute
        cgpa = C;   // 3.80 receive float C  cause purpose is to set value to cgpa attribute

        cout << "\nName : " << name << '\n';
        cout << "ID : " << id << '\n';
        cout << "CGPA : " << fixed << setprecision(2) << cgpa << '\n';
    }
};

int main()
{
    // Variables to store user input
    string name;
    int id;
    float cgpa;

    // Taking input for the  students
    cout << "Enter details for the first student:\n";
    cin.sync(); // Ignore any newline characters left in the input buffer
    cout << "Enter Name: ";
    getline(cin, name); // Use getline to capture full name with spaces

    cout << "ID: ";
    cin >> id;

    cout << "CGPA: ";
    cin >> cgpa;

    // Create the first Student object
    Student student1(name, id, cgpa);

    cout << "\nEnter details for the second student:\n";
    cin.sync(); // Ignore any newline characters left in the input buffer
    cout << "Enter Name: ";
    getline(cin, name); // Use getline to capture full name with spaces

    cout << "ID: ";
    cin >> id;

    cout << "CGPA: ";
    cin >> cgpa;

    // Create the second Student object
    Student student2(name, id, cgpa);

    cout << "\nEnter details for the third student:\n";
    cin.sync(); // Ignore any newline characters left in the input buffer
    cout << "Enter Name: ";
    getline(cin, name); // Use getline to capture full name with spaces

    cout << "ID: ";
    cin >> id;

    cout << "CGPA: ";
    cin >> cgpa;

    // Create the third Student object
    Student student3(name, id, cgpa);

    return 0;
}


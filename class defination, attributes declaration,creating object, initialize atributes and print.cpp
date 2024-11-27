#include<iostream>
#include <string>
#include<iomanip>
using namespace std;

class Student {
    public:  // Access modifier
    // Declaring class attributes
    string name;
    int rollNumber;
    float cgpa;
};

int main(){
    // Declaring class variables
    Student student1;

    // Access and Initialize class attributes
    student1 . name = "Faysal Wahid";
    student1 . rollNumber = 10021;
    student1 . cgpa = 3.80;

    // Displaying student 1 details
    cout << "Student 1 Details :\n";
    cout << "Name: " << student1 . name << '\n';
    cout << "Roll Number: " << student1 . rollNumber << '\n';
    cout << "CGPA: " << fixed << setprecision(2) << student1 . cgpa << endl;

    return 0;
}


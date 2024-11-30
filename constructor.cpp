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

        cout << "Name : " << name << '\n';
        cout << "ID : " << id << '\n';
        cout << "CGPA : " << fixed << setprecision(2) << cgpa << '\n';
    }
};

int main()
{
    // class object declaration and pass parameters to the constructor
    Student faysal("Faysal", 1001, 3.80);
    Student tarek("Tarek", 1002, 3.75);
    Student fajim("Fajim", 1003, 3.70);

    return 0;
}

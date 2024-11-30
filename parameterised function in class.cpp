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

    // parameterized function for input
        void inputValues(string N, int I, float C) // Receiving  initialized object values
    {
        name = N;  // "Khan" receive string N  cause purpose is to set value to name attribute
        id = I;         // 1001 receive int I  because purpose is to set value to id attribute
        cgpa = C;   // 3.80 receive float C  because purpose is to set value to cgpa attribute
    }
    // function for display
        void displayValues()
    {
        cout << "\nName : " << name << '\n';
        cout << "ID : " << id << '\n';
        cout << "CGPA : " << fixed << setprecision(2) << cgpa << '\n';
    }
};

int main()
{
    // class object declaration
    Student khan, tarek, fajim;

    /* As accessing class attributes with dot operator (.) and value assign to class object
    repeatedly is a hassle so we can call a function and pass object's values to a
    parameterized function */

    // Passing object's values to the parameterized function
    khan . inputValues("Khan", 1001, 3.80);
    tarek . inputValues("Tarek", 1002, 3.75);
    fajim . inputValues("Fajim", 1003, 3.70);

    // Calling displayValues function
    khan . displayValues();
    tarek . displayValues();
    fajim . displayValues();

    return 0;
}


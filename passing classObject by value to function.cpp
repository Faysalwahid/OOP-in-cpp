#include<iostream>
using namespace std;

class Object{

public :

    string name;
    int age;
};
            //  class name    varible name
void input(Object         object_varable)
{
cout << "Enter your name : ";
cin >> object_varable.name;

cout << "Enter your age : ";
cin >> object_varable.age;

// As pass by value so only print inside input function
cout << "Name : " << object_varable.name << endl;
cout <<"Age : " << object_varable.age << endl;
}
           //  class name    varible name
void Print(Object         object_varable)
{
cout << "Name : " << object_varable.name << endl;
cout <<"Age : " << object_varable.age << endl;
}

int main(){
Object  object_varable ;

object_varable.name = "Faysal";
object_varable.age = 33;

input(object_varable ); // call by value
Print(object_varable); // call by value

return 0;
}

#include<iostream>
using namespace std;


//Single

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int studentId;
    string department;
};

int main() {
    Student student;
    student.name = "1";
    student.age = 20;
    student.studentId = 12345;
    student.department = "it";

    
    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << endl;
    cout << "Student ID: " << student.studentId << endl;
    cout << "Student department: " << student.department << endl;


}
//Multilevel

class Person {
public:
    string name;
    int age;
};

class Employee : public Person {
public:
    int employeeId;
};

class Manager : public Employee {
public:
    string department;
};

int main() {
    Manager manager;
    manager.name = "1";
    manager.age = 24;
    manager.employeeId = 999;
    manager.department = "it";

    
    cout << "Manager Name: " << manager.name << endl;
    cout << "Manager Age: " << manager.age << endl;
    cout << "Manager ID: " << manager.employeeId << endl;
    cout << "Manager Department: " << manager.department << endl;

    
}
//Multiply

class Shape {
public:
    string color;
};

class Circle : public Shape {
public:
    double radius;
};

class Rectangle : public Shape {
public:
    double length;
    double width;
};

class Square : public Rectangle {
public:
   
};

int main() {
    Square square;
    square.color = "Red";
    square.length = 5.0;
    square.width = 5.0;

   
    cout << "Square Color: " << square.color << endl;
    cout << "Square Length: " << square.length << endl;
    cout << "Square Width: " << square.width << endl;

}
//Hierarchical

class Animal {
public:
    string name;
    int age;
};

class Cat : public Animal {
public:
    string Color;
};

class Dog : public Animal {
public:
    string cins;
};

int main() {
    Cat cat;
    cat.name = "Cat";
    cat.age = 3;
    cat.Color = "black";

    
    cout << "Cat Name: " << cat.name << endl;
    cout << "Cat Age: " << cat.age << endl;
    cout << "Cat Fur Color: " << cat.Color << endl;

    Dog dog;
    dog.name = "Dog";
    dog.age = 5;
    dog.cins = "Labrador";

    
    cout << "Dog Name: " << dog.name << endl;
    cout << "Dog Age: " << dog.age << endl;
    cout << "Dog cins: " << dog.cins << endl;

    
}

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char name[100];
    int studentID;
    int age;

public:
    // Initialize object data
    void init(const char n[], int id, int a)
    {
        strcpy(name, n);
        studentID = id;
        age = a;
    }

    // Print student information
    void printStudentInfo()
    {
        cout << "Name       : " << name << endl;
        cout << "Student ID : " << studentID << endl;
        cout << "Age        : " << age << endl;
    }

    // Return student ID
    int getID()
    {
        return studentID;
    }

    // Return age
    int getAge()
    {
        return age;
    }

    // Return name
    char* getName()
    {
        return name;
    }
};

// Swap two Person objects
void personSwap(Person &p1, Person &p2)
{
    Person temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    Person student1, student2;

    // Initialize students
    student1.init("Hope", 2026001, 21);
    student2.init("Daniel", 2026002, 22);

    cout << "==================================" << endl;
    cout << "Before Swap" << endl;
    cout << "==================================" << endl;

    cout << "\nStudent 1 Info" << endl;
    student1.printStudentInfo();

    cout << "\nStudent 2 Info" << endl;
    student2.printStudentInfo();

    // Swap objects
    personSwap(student1, student2);

    cout << "\n==================================" << endl;
    cout << "After Swap" << endl;
    cout << "==================================" << endl;

    cout << "\nStudent 1 Info" << endl;
    student1.printStudentInfo();

    cout << "\nStudent 2 Info" << endl;
    student2.printStudentInfo();

    cout << "\n==================================" << endl;
    cout << "Getter Function Test" << endl;
    cout << "==================================" << endl;

    cout << "Student 1 Name : " << student1.getName() << endl;
    cout << "Student 1 ID   : " << student1.getID() << endl;
    cout << "Student 1 Age  : " << student1.getAge() << endl;

    return 0;
}
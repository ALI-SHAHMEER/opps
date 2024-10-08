#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    string gender;

    // Constructor
    Person(string n, string g) : name(n), gender(g) {}

    // Destructor
    ~Person() {}

    // Method to display information
    virtual void get_info() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Student : public Person {
public:
    int id;
    int age;

    // Constructor
    Student(string n, string g, int i, int a) : Person(n, g), id(i), age(a) {}

    // Method to display information
    void get_info() override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Gender: " << gender << endl;
    }
};

class GradStudent : public Student {
public:
    int level;
    string field;

    // Constructor
    GradStudent(string name, string gender, int id, int age, int l, string f): Student(name, gender, id, age), level(l), field(f) {}

    // Method to display information
    void get_info() override{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Gender: " << gender << endl;
        cout << "Level: " << level << endl;
        cout << "Field: " << field << endl;
    }
};

int main() {
    GradStudent g("Ali", "Male", 5459, 23, 14, "BSSE");
    g.get_info();
    return 0;
}

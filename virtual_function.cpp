#include<iostream>
#include<string>

using namespace std;

class Parent
{
    public:
        string name;
        int age;
        
        Parent(string n, int a) : name(n), age(a) {}

        // Marked as virtual to allow overriding
        virtual void see_detail() 
        {
            cout << "Name: " << name << endl << "Age: " << age << endl << "This is Parent Class Function/Overridden Function" << endl;
        }

        // Passing by const reference to avoid unnecessary copies
        friend ostream& operator<<(ostream& Cout, const Parent& p)
        {
            Cout << "Name: " << p.name << endl << "Age: " << p.age;
            return Cout;
        }
};

class Child : public Parent
{
    public:
        string university;
        float cgpa;
        
        // Properly initialize base class members
        Child(string n, int a, string u, float c) : Parent(n, a), university(u), cgpa(c) {}

        // Override the see_detail function
        void see_detail() override
        {
            cout << "Name: " << name << endl << "Age: " << age << endl << "University: " << university << endl << "CGPA: " << cgpa << endl;
            cout << "This is Child Class Function/Overriding Function" << endl;
        }

        // Passing by const reference to avoid unnecessary copies
        friend ostream& operator<<(ostream& Cout, const Child& c)
        {
            Cout << "Name: " << c.name << endl << "Age: " << c.age << endl << "University: " << c.university << endl << "CGPA: " << c.cgpa;
            return Cout;
        } 
};

int main()
{
    Parent p("Ali Shahmeer", 23);
    cout << p;
    Child c("Ali Shahmeer", 23, "SMIU", 3.3);
    cout << c;

    // Demonstrating function overriding
    p.see_detail();
    c.see_detail();

    return 0;
}

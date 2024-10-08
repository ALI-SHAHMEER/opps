#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Properties , Attributes
public:
    string name;
    string dept;
    string subject;
private:
    double salary;
    //Method , Member Functions
public: 
    Teacher()
    {
        cout << "This is Teacher class constructor";
    }
    Teacher(string name)
    {
        this->name = name;
    }
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        set_Salary(salary);
    }
    Teacher(Teacher &orgobj)
    {
        cout <<"This is copy constructor"<<endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void set_Salary(double s){
        salary = s;
    }
    //getter
    double get_Salary(){
        return salary;
    }
};
class Account{
    private:
        double accountbalance;
        string password;
    public:
        string accountId;
        string username;
    Account(string id,string name,double balance,string code)
    {
        accountId = id;
        username = name;
        set_balance(balance);
        password = code;
    }
    void set_balance(double balance)
    {
        accountbalance = balance;
    }
    double get_balance()
    {
        return accountbalance;
    }

};
class Student{
    public:
        string name;
        double* cgpaPtr;
    Student(string name,double cgpa)
    {
        this->name = name;
        cgpaPtr = new double; 
        *cgpaPtr = cgpa;
    }
    Student(Student &orgobj)
    {
        this->name = orgobj.name;
        cgpaPtr = new double;
        *cgpaPtr = *orgobj.cgpaPtr;
    }
    void getInfo()
    {
        cout <<"Name: " << name << endl;
        cout <<"Cgpa: " << *cgpaPtr << endl;
    }
    ~Student()
    {
        cout << "Destructor" <<endl;
        delete cgpaPtr;
    }
};
class Person
{
    public:
        string name;
        string gender;
    Person(){
        cout<<"This is Base or Parent Class Constructor"<<endl;
    }
    Person(string name,string geneder){
        this->name = name;
        this->gender = geneder;
    }
    ~Person(){
        cout<<"This is Base or Parent Class Destructor"<<endl;
    }
};
class Id:public Person
{
public:
    int roll_number;

        // this->roll_number = roll;
    Id(string name,string geneder,int roll):Person(name,geneder){
        this->roll_number = roll;
    }
    Id(){
        cout<<"This is drivied of child class constructor"<<endl;
    }
    ~Id(){
        cout<<"This is drivied or child Class Destructor"<<endl;
    }
    void get_info()
    {
        cout <<"Name "<<name<<endl;
        cout <<"Roll Number "<<roll_number<<endl;
        cout <<"Geneder "<<gender<<endl;
    }
};
int main(){
    // Teacher t1("Ali Shahmeer","SE","C++",45000);
    // Account a1("BHAL","ALI",200000,"010");
    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // t1.changeDept("CS");
    // cout << t1.dept << endl;
    // cout << t1.subject << endl;
    // cout << t1.get_Salary() << endl;
    // cout << a1.username << endl;
    // cout << a1.get_balance() << endl;
    // int x = 100;
    // int *ptrx = &x;
    // cout << *ptrx << endl;
    // cout << &x << endl;
    // cout << &ptrx << endl;
    // Teacher t2(t1);
    // cout << t2.name << endl;
    // Student S1("Ali",8.9);
    // S1.getInfo();
    // Student S2(S1);
    // *(S2.cgpaPtr) = 7.7;
    // S2.name = "Shahmeer";
    // S2.getInfo();
    // S1.getInfo();
    // int x = 10;
    // int* ptr = &x;
    // cout<<"Value of X =>"<< *ptr <<endl;
    // *ptr = 12;
    // cout<<"Value of X =>"<< *ptr <<endl;
    Id s1("Ali Shahmeer","Male",10);
    
    // s1.get_info();
    cout<<s1.gender<<endl;
    return 0; 
}
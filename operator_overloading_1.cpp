#include<iostream>
#include<string>

using namespace std;

struct Complex
{
    float real;
    float imaginary;
    Complex(float r,float i):real(r),imaginary(i){}

    // Complex operator+(const Complex& c1)
    // {
    //     return Complex(real+c1.real,imaginary+c1.imaginary);
    // }
    // friend ostream& operator<<(ostream& output,const Complex& c)
    // {
    //     output<<c.real<<"+"<<c.imaginary<<"i";
    //     return output;
    // }
};
Complex operator+(const Complex c1,const Complex c2)
{
    return Complex(c1.real+c2.real,c1.imaginary+c2.imaginary);
}
ostream& operator<<(ostream& output,const Complex c)
{
    output<<c.real<<"+"<<c.imaginary<<"i";
    return output;
}

int main()
{
    Complex c1(3.4,7.8);
    Complex c2(4.8,8.8);
    Complex c3 = c1 + c2;
    // cout<<c3.real<<"R"<<c3.imaginary<<"i"<<endl;
    cout<<c3;
    return 0;
}
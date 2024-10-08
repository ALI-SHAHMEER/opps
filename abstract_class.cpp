#include<iostream>
#include<string>

using namespace std;

class Shape
{
    virtual void draw() = 0; 
};
struct Circle
{
    virtual void draw() = 0;
};
class Triangle:public Circle
{
    public:
        void draw() override
        {
            cout<<"This is Triangle Class inherited from Circle struct"<<endl;
        }
};
struct Square:public Shape
{
    void draw() override
    {
        cout<<"This is Square Struct inherited from Shape Class"<<endl;
    }
};
int main()
{
    // Shape s;
    // Circle c;
    Triangle t;
    t.draw();
    Square s;
    s.draw();
    return 0;
}
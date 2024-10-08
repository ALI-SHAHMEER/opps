#include<iostream>
#include<string>
#include<list>

using namespace std;

struct Rectangle
{
    float length;
    float width;
    Rectangle(float l,float w):length(l),width(w){}
    // Rectangle operator+(Rectangle& r1)
    // {
    //     return Rectangle(r1.length+length,r1.width+width);
    // }
    friend ostream& operator<<(ostream& output,Rectangle r)
    {
        output<<"Length "<<r.length<<"Width "<<r.width;
        return output;
    }
};
Rectangle operator+(Rectangle& r1,Rectangle& r2)
{
    return Rectangle(r1.length+r2.length,r1.width+r2.width); 
};
struct History
{
    list<float> length;
    list<float> width;
    void operator+(Rectangle& r)
    {
        length.push_back(r.length);
        width.push_back(r.width);
    }   
    friend ostream& operator<<(ostream& output,History& h)
    {
        auto lit = h.length.begin();
        auto wit = h.width.begin();
        for(lit,wit; lit != h.length.end() && wit != h.width.end(); lit++,wit++)
        {
            // output<<"Length: "<<&lit<<" Width:"<<&wit<<endl; //reference address
            output<<"Length: "<<*lit<<" Width:"<<*wit<<endl; //dereference value 
        }
        return output;
    }

};



int main()
{
    History h;
    Rectangle r1(12,85);
    Rectangle r2(75,74);
    Rectangle r3 = r1 + r2;
    h+r1;
    h+r2;
    h+r3;
    cout<<h;
    // cout<<r3;
    return 0;
}
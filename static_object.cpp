#include<iostream>
#include<string>

using namespace std;

class ABC
{
    public:
        ABC()
        {
            cout<<"This is constructor"<<endl;
        }
        ~ABC()
        {
            cout<<"This is destructor"<<endl;
        }
};

int main()
{
    if(true)
    {
        static ABC obj;
    }
    cout<<"This is end of main Function"<<endl;
    return 0;
}
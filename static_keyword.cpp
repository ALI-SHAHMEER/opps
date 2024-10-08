#include<iostream>
#include<string>

using namespace std;

void add(){
    static int x = 0;
    cout<<"X = "<<x<<endl;
    x += 2;
}

int main()
{
    add();
    add();
    add();
    return 0;
}
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()=0;
};

class Derived : public Base
{
    public:
    void show()
    {
        cout<<"Derived class is derive from base class";
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
}

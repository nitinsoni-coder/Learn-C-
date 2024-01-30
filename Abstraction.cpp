#include<iostream>
using namespace std;
class car
{
    public:
    virtual void show() =0; //pure virtual function
};

class tyre:public car
{
    public:
    void show()
    {
        cout<<"tyre is good for car"<<endl;
    }
};

class handle:public car
{
    public:
    void show()
    {
        cout<<"handle is smooth"<<endl;
    }
};

int main()
{
    tyre t;
    handle h;
    t.show();
    h.show();
    return 0;
}
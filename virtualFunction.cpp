#include<iostream>
using namespace std;
class car
{
    public:
    virtual void tyre()
    {
        cout<<"Base class is invoked";
    }
};

class bike:public car
{
    public: 
    void tyre()
    {
        cout<<"derived class is invoked";
    }
};

int main()
{
  car *c;  //pointer of base class
  bike b;
  c= &b;
  c->tyre();
}
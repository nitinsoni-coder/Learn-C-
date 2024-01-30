#include<iostream>
using namespace std;
class A
{
    protected:
    int a;

    public:
    void cat()
    {
        a =10;
    }
};
class B 
{
    protected:
    int b;

    public:
    void dog()
    {
       b =20;
    }
};
class C : public A, public B
{
   public:
      void display()
      {
          cout<<"The value of a is : "<<a<<endl;
          cout<<"The value of b is : "<<b<<endl;
          cout<<"Addition of a and b is : "<<a+b;
      }
};

int main()
{
    C c;
    c.cat();
    c.dog();
    c.display();
    return 0;
}
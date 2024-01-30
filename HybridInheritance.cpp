#include<iostream>
using namespace std;
class A 
{
    protected:
    int a;

    public:
    void how()
    {
      cout<<"Enter the value of a"<<endl;
      cin>>a;
    }
};

class B : public A
{
   protected:
   int b;

   public:
   void are()
   {
       cout<<"Enter the value of b"<<endl;
       cin>>b;
   }
};

class C
{
    protected:
    int c;

    public:
    void you()
    {
        cout<<"Enter the value of c"<<endl;
        cin>>c;
    }
};

class D : public B,public C
{
    public:
     void mul()
     {
         how();
         are();
         you();
         cout<<"Multiplication of a*b*c is : "<<a*b*c<<endl;
     }
};

int main()
{
    D d;
    d.mul();
    return 0;
}
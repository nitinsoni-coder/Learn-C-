#include<iostream>
using namespace std;
class shape    //base class
{
    public:
     virtual void draw()   //virtual function
     {
        cout<<"drawing..."<<endl;
     }
};

class rectangle : public shape
{
    public:
    void draw()
    {
        cout<<"rectangle is drawing.."<<endl;
    }
};

class circle : public shape
{
    public:
    void draw()
    {
        cout<<"circle is drawing..."<<endl;
    }
};

int main()
{
   shape *s; //base class pointer
   shape sh;  //base class object
   rectangle rec;
   circle cir;

   s = &sh;
   s->draw();

   s = &rec;
   s->draw();

   s = &cir;
   s->draw();
}
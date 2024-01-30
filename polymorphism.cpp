#include<iostream>
using namespace std;
class Animal
{
  public:
    void eat()
    {
        cout<<"eating..";
    }
};

class Dog : public Animal
{
   public:
     void eat()
     {
         cout<<"eating bread";
     }
};

int main()
{
    Dog d1;
    d1.eat();
    return 0;
}
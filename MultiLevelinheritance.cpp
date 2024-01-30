#include<iostream>
using namespace std;
class Animal
{
    public:
      void eat()
      {
          cout<<"eating"<<endl;
      }
};
class Dog : public Animal
{
    public:
       void bark()
       {
           cout<<"barking"<<endl;
       }
};
class cat : public Dog
{
    public:
       void walk()
       {
           cout<<"walking";
       }
};

int main()
{
    cat c;
    c.eat();
    c.bark();
    c.walk();
    return 0;
}
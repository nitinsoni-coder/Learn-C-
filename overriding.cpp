#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout<<"eating bread..";
    }
};

class Dog : public Animal
{
    public:
     void eat()
     {
         cout<<"eating..";
     }
};

int main(void)
{
    Dog d1 =Dog();
    d1.eat();
    return 0;
}

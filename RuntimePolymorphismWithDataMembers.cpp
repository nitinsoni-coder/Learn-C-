#include<iostream>
using namespace std;
class Animal
{
    public:
    string color = "black";
};

class Dog : public Animal
{
   public:
   string color = "grey";
};

int main()
{
    Animal a1 = Dog();
    cout<<a1.color;
}

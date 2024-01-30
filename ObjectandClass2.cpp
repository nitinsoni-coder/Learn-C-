#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        string name;
        float salary;

    void insert(int i, string n, float f)
    {
        id = i;
        name = n;
        salary = f;
    }
    void display()
    {
      cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(void)
{
    Employee e1;
    Employee e2;
    e1.insert(1,"nitin",500000);
    e2.insert(2,"ishu",800000);

    e1.display();
    e2.display();
}
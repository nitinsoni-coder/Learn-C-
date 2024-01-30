#include<iostream>
using namespace std;
class Employee{
    public:
      int id;
      string name;
      int salary;
      static int count;

      Employee(int id,string name,int salary)
      {
          this->id = id;
          this->name = name;
          this->salary = salary;
          count++;
      }

      void display()
      {
          cout<<id<<" "<<name<<" "<<salary<<endl;
      }
};

int Employee::count=0;

int main(void)
{
    Employee e1 = Employee(101,"nitin",2050000);
    Employee e2 = Employee(102,"ishu",3400900);
    e1.display();
    e2.display();

    cout<<"total object are "<<Employee::count;
    return 0;
}
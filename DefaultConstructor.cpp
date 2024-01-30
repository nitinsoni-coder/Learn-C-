#include<iostream>
using namespace std;
class Employee{
    public:
       Employee()
       {
           cout<<"Default constructor Invoked"<<endl;
       }
};

int main(void)
{
    Employee e1;  //creating an object of employee
    Employee e2;
    return 0;
}
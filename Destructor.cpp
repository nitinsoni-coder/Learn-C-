#include<iostream>
using namespace std;
class Employee{
    public:
       Employee()
       {
           cout<<"constructor is invoked"<<endl;
       }
       ~Employee()
       {
           cout<<"Destructor is invoked"<<endl;
       }
};

int main()
{
    Employee e1;
    Employee e2;
    return 0;
}
#include<iostream>
using namespace std;

class student{
    public:
     int id;
     string name;
};

int main()
{
    student s1;

    s1.id = 101;
    s1.name = "nitin";

    cout<<"The id of student is : "<<s1.id<<endl;
    cout<<"The name of student is : "<<s1.name<<endl;
}

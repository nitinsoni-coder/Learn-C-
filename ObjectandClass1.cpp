#include<iostream>
using namespace std;

class student{
    public:
    int id;
    string name;

    void insert(int i, string n)
   {
    id = i;
    name = n;
   }

    void display()
   {
    cout<<id <<" "<<name<<endl;
   }
};

int main(void)
{
   student s1;
   student s2;
   s1.insert(1,"nitin");
   s2.insert(2,"ishu");

   s1.display();
   s2.display();
}
#include<iostream>
using namespace std;
int main()
{
    int number=5;
    int *p;

    p =&number;

    cout<<"Address of number variable is : "<<&number<<endl;
    cout<< "Address of p pointer is : "<<p <<endl;
    cout<<"value of p variable is : "<<*p<<endl; 
}
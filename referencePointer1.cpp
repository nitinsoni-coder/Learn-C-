#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int b =20;

    swap(a,b);  //function calling 

    cout<<"value of a is : "<<a<<endl;
    cout<<"value of b is : "<<b<<endl;
    return 0;
}

void swap(int &p ,int &q)
{
    int temp; //variable declaration
    temp = p;
    p=q;
    q=temp;    
}
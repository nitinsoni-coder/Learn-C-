#include<iostream>
using namespace std;
int add(int a, int b)  //here we made a function in which we pass parameter int a and int b
{
    return a+b;
}
int main()
{
  int (*funcptr)(int,int);  //we made a function pointer and pass parameter

  funcptr = add;  //funcptr is pointing to add function

  int sum = funcptr(5,5); //here we made an vaiable pointing to the 'funcptr' pointer in which parameter was passed because 'funcptr' call the "add()" function and now the 'funcptr' pointer has the adress value of add() function.

  cout<<"The value of sum is : "<<sum<<endl;
  return 0;
}


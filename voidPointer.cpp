#include<iostream>
using namespace std;
int main()
{
    void *ptr;
    int *ptr1;
    int a = 10;

    ptr = &a;
    ptr1 = (int*)ptr; //assigning void pointer to integer pointer

    cout<<"The value of *ptr1 is : " <<*ptr1 <<endl;


}
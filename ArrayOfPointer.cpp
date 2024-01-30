#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int marks[10];

    cout<<"Enter elements of array"<<endl;

    for(int i=0; i<10; i++)
    {
        cin >> marks[i];
    }
   ptr = marks; //here both ptr and marks pointing to the same value 
    cout<<"the value of *ptr is : "<<*ptr<<endl;
    cout<<"the value of *marks is : "<<*marks<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    int ptr1[5]; //integer array declaration
    int *ptr2[5];  //integer pointer array declarartion

    cout<<"Enter the element of ptr"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>ptr1[i];
    }

    for(int i=0; i<5; i++)
    {
        ptr2[i] = &ptr1[i];
    }

    cout<< "the value of *ptr2 is : "<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<*ptr2[i] <<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    ineligible: 
    cout<< "you are ineligible to vote!\n";

    cout<< "Enter your age to vote";
    int age;
    cin>>age;

    if(age<18)
    {
        goto ineligible;
    }
    else
    {
        cout<<"you are eligible to vote";
    }
}
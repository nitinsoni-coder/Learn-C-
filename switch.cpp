#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter number : ";
    cin>>num;

    switch(num)
    {
        case 10: cout<<"value is 10";
        break;
        case 20: cout<<"value is 20";
        break;
        case 30: cout<<"value is 30";
        break;
        default : cout<<"not 10,20 and 30";
    }
    return 0;
}
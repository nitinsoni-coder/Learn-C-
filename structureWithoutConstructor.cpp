#include<iostream>
using namespace std;
struct rectangle
{
    int width,height;
};

int main(void)
{
    struct rectangle rec;
    rec.height = 15;
    rec.width = 12;
    cout<<"The area of rectangle is "<<rec.height*rec.width<<endl;
    return 0;
}


#include<iostream>
using namespace std;
struct rectangle
{
    int width,height;

    rectangle(int width ,int height)
    {
       this->width = width;
       this->height = height;
    }

    void display()
    {
        cout<<"area of rectangle is "<<(width*height)<<endl;
    }
};
int main()
{
   struct rectangle rec = rectangle(4,5);
   rec.display();
}
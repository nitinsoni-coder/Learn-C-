#include<iostream>
using namespace std;
class shape
{
    public:
    int a;
    int b;

     void get_data(int n, int m)
     {
         a =n;
         b =m;
     }
};

class Rectangle : public shape //inherting shape class
{
    public:

       int rec_area()
       {
           int result = a*b;
           return result;
       }
};

class Triangle : public shape //inherting shape class
{
    public:

        int tri_area()
        {
            float result =0.5*a*b;
            return result;
        }
};

int main()
{
    Rectangle r;
    Triangle t;
    int length,breadth,height,base;
 
    cout<<"Enter the length and breadth of rectangle : "<<endl;
    cin>>length>>breadth;

    r.get_data(length,breadth);
    int m = r.rec_area();
    cout<<"Area of rectangle is : "<<m<<endl;

    cout<<"Enter the height and base of triangle : "<<endl;
    cin>>height>>base;

    t.get_data(height,base);
    int n = t.tri_area();
    cout<<"Area of triangle is : "<<n<<endl;
}

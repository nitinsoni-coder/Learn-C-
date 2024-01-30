#include<iostream>
using namespace std;
class Animal
{
    private:
    int x,y,z;

    public:
    void show()
    {
        cout<<"Enter two number : "<<endl;
        cin>>x>>y;
        z = x+y;
        cout<<"sum of two number is : "<<z<<endl;
    }
};

int main()
{
    Animal a;
    a.show();
}
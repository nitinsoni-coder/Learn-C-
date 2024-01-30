#include<iostream>
using namespace std;
class math
{
    public:
    static int add(int a,int b)
    {
        return a+b;
    }

    static int add(int a,int b,int c)
    {
        return a+b+c;
    }
};

int main()
{
    math m;
    cout<<m.add(10,20)<<endl;
    cout<<m.add(12,13,14);
    
}
#include<iostream>
using namespace std;
namespace First
{
    void show()
    {
        cout<<"first class"<<endl;
    }
}

namespace second
{
    void show()
    {
        cout<<"second class"<<endl;
    }
}

using namespace First;

int main()
{
    show();
    return 0;
}
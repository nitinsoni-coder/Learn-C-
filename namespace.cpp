#include<iostream>
using namespace std;
namespace First
{
    void show()
    {
        cout<<"Hello this is namespace"<<endl;
    }
}

namespace second
{
    void show()
    {
        cout<<"hello second namespace";
    }
}

int main()
{
    First::show();
    second::show();
    return 0;
}
